#!/usr/bin/env python3
"""Generate the ASAP2 (A2L) description of the firmware from the firmware sources.

Every A2L object comes from a ';@a2l' annotation in firmware/**/*.a66|*.inc.
An annotation describes the symbol defined on the next non-comment line, and
the address is that symbol's value as the assembler computes it:

    ;@a2l MAP UBYTE conv=cv_degcrk_3 fmt=5.1 x=ldpm_n_32__iga_temp y=ldpm_maf_hb__iga_temp "Basis for ..."
    ip_iga_bas_temp__n_32__maf_hb   EQU  095ADDH

Object annotations (KIND DTYPE key=value ... ["description"]):
    VALUE | CURVE | MAP   conv= fmt= [x=<axis symbol>] [y=<axis symbol>]
    AXIS                  n=<points> conv= [input=<measurement symbol>]   ([count][points])
    MEASUREMENT           conv= [fmt=] [mask=0x..]
  any of them: name=<A2L name> when the symbol name can't be used in A166 (e.g. 'n')
  DTYPE: UBYTE SBYTE UWORD SWORD ULONG SLONG.  fmt=W.P means "%W.P".

Standalone annotations (firmware/inc/a2l.inc):
    PROJECT <name> "text" / MODULE <name> "text" / VERSION "text"
    EPK <addr> "text" / MEMORY <name> <CODE|DATA|VARIABLES> <FLASH|RAM> <addr> <size> "text"
    CCP station= cro= dto= baud= [seed_key=<dll>] [optional_cmd=<code>,<code>,...]
    CCP_PAGE <no> "name" <addr> <size> <flag>...      (DEFINED_PAGES; flags RAM FLASH
                                    RAM_INIT_BY_ECU RAM_INIT_BY_TOOL FLASH_BACK DEFAULT ...)
    CONV <name> LINEAR <scale> <offset> "unit"          (phys = scale*raw + offset; a/b allowed)
    CONV <name> VTAB "unit" 0="OFF" 1="ON" ...
    CONV <name> VTAB_RANGE "unit" 1..3="X" ...
    CONV <name> TAB "unit" 0=0 1=1 3=3 ...
'&pct;' stands for '%' (A166 reads '%' as a macro call even in comments).

Usage: python3 tools/gen_a2l.py [-o out.a2l]
       (tools/build.py calls generate() with the link's symbol table, so labels
        in modules - e.g. new parameters in custom/ - resolve too)
"""
import argparse
import collections
import glob
import os
import re
import shlex
import sys
from fractions import Fraction

import openc166

HERE = os.path.dirname(os.path.abspath(__file__))
REPO = os.path.dirname(HERE)
FW = os.path.join(REPO, "firmware")
AML = os.path.join(REPO, "a2l", "ccp.aml")
INC_DIRS = [os.path.join(FW, "inc"), os.path.join(FW, "cal")]

DTYPES = {"UBYTE": (1, False), "SBYTE": (1, True), "UWORD": (2, False), "SWORD": (2, True),
          "ULONG": (4, False), "SLONG": (4, True)}
OBJ_KINDS = {"VALUE", "CURVE", "MAP", "AXIS", "MEASUREMENT"}
_DEF = re.compile(r"^([A-Za-z_]\w*)(?:\s*:|\s+(?:EQU|DEFA|DEFR|DEFB|SET|DB|DW|DD|DS|DSB|DSW|DSD|LABEL)\b)", re.I)


class A2LError(Exception):
    pass


# ---- reading annotations ---------------------------------------------------------------------
def _tokens(text, where):
    try:
        toks = shlex.split(text.replace("&pct;", "\x00"), posix=True)
    except ValueError as e:
        raise A2LError("%s: %s" % (where, e))
    return [t.replace("\x00", "%") for t in toks]


def scan(paths):
    """-> (objects, standalone): objects = [(symbol, kind, tokens, where)]."""
    objects, standalone = [], []
    for path in paths:
        pending, where = [], None
        for no, line in enumerate(open(path, encoding="utf-8", errors="replace"), 1):
            s = line.rstrip("\n")
            if s.startswith(";@a2l"):
                toks = _tokens(s[5:], "%s:%d" % (os.path.relpath(path, REPO), no))
                if not toks:
                    continue
                if toks[0] in OBJ_KINDS:
                    pending.append(toks)
                    where = "%s:%d" % (os.path.relpath(path, REPO), no)
                elif pending and toks[0] not in OBJ_KINDS and "=" in toks[0]:
                    pending[-1] += toks            # continuation of the previous object
                else:
                    standalone.append((toks, "%s:%d" % (os.path.relpath(path, REPO), no)))
                continue
            st = s.strip()
            if not st or st.startswith(";"):
                continue
            m = _DEF.match(s)
            if pending:
                if not m:
                    raise A2LError("%s: ;@a2l annotation not followed by a symbol definition" % where)
                for toks in pending:
                    objects.append((m.group(1), toks[0], toks[1:], where))
                pending = []
        if pending:
            raise A2LError("%s: dangling ;@a2l annotation at end of file" % where)
    return objects, standalone


def kv(tokens):
    """positional tokens, key=value dict, trailing description (quoted text)."""
    pos, keys = [], {}
    for t in tokens:
        if "=" in t and re.match(r"^[A-Za-z_]\w*=", t):
            k, v = t.split("=", 1)
            keys[k] = v
        else:
            pos.append(t)
    return pos, keys


# ---- addresses -------------------------------------------------------------------------------
def include_symbols(paths):
    """Assemble the annotated include files on their own and return their symbols."""
    incs = [p for p in paths if p.endswith(".inc")]
    if not incs:
        return {}
    src = "$MOD167\n$SEGMENTED\n$INCLUDE (REG167.INC)\n" + "".join(
        "$INCLUDE (%s)\n" % os.path.basename(p) for p in incs) + "        END\n"
    r = openc166.assemble(src, include_dirs=INC_DIRS + sorted({os.path.dirname(p) for p in incs}))
    if not r.ok:
        raise A2LError("assembling the annotated include files failed: %s" %
                       "; ".join("%s %s" % (e.code, e.message) for e in r.errors[:5]))
    return {s.name.lower(): s.value for s in r.symbols.values()}


# ---- conversions -----------------------------------------------------------------------------
def frac(s):
    return Fraction(s) if "/" not in s else Fraction(int(s.split("/")[0]), int(s.split("/")[1]))


def fnum(f):
    f = Fraction(f)
    if f.denominator == 1:
        return str(f.numerator)
    return repr(float(f))


class Convs:
    def __init__(self):
        self.spec = {}

    def add(self, toks, where):
        name, kind = toks[0], toks[1]
        if name in self.spec:
            raise A2LError("%s: conversion %s defined twice" % (where, name))
        if kind == "LINEAR":
            self.spec[name] = ("LINEAR", frac(toks[2]), frac(toks[3]), toks[4] if len(toks) > 4 else "")
        elif kind in ("VTAB", "VTAB_RANGE", "TAB"):
            unit, rest = toks[2], toks[3:]
            pairs = [t.split("=", 1) for t in rest]
            self.spec[name] = (kind, pairs, unit)
        else:
            raise A2LError("%s: unknown conversion kind %s" % (where, kind))

    def phys_range(self, name, size, signed):
        lo, hi = ((-(1 << (8 * size - 1)), (1 << (8 * size - 1)) - 1) if signed else (0, (1 << (8 * size)) - 1))
        sp = self.spec[name]
        if sp[0] == "LINEAR":
            a, b = sp[1] * lo + sp[2], sp[1] * hi + sp[2]
            return min(a, b), max(a, b)
        if sp[0] == "TAB":
            ps = [frac(p) for _, p in sp[1]]
            return min(ps), max(ps)
        return Fraction(lo), Fraction(hi)

    def scale(self, name):
        sp = self.spec[name]
        return abs(sp[1]) if sp[0] == "LINEAR" else Fraction(1)

    def text(self, used):
        out = []
        for name in sorted(used):
            sp = self.spec[name]
            if sp[0] == "LINEAR":
                s, o, unit = sp[1], sp[2], sp[3]
                # ASAP2 RAT_FUNC: internal = (b*phys + c) / f ; raw = (phys - o) / s
                b = s.denominator * o.denominator
                c = -(s.denominator * o.numerator)
                f = s.numerator * o.denominator
                out.append("    /begin COMPU_METHOD %s \"\"\n      RAT_FUNC \"%%8.3\" %s\n"
                           "      COEFFS 0 %d %d 0 0 %d\n    /end COMPU_METHOD\n" % (name, q(unit), b, c, f))
            elif sp[0] == "VTAB":
                out.append("    /begin COMPU_VTAB %s_VT \"\" TAB_VERB %d\n%s    /end COMPU_VTAB\n" % (
                    name, len(sp[1]), "".join("      %s %s\n" % (r, q(t)) for r, t in sp[1])))
                out.append("    /begin COMPU_METHOD %s \"\"\n      TAB_VERB \"%%12.0\" %s\n"
                           "      COMPU_TAB_REF %s_VT\n    /end COMPU_METHOD\n" % (name, q(sp[2]), name))
            elif sp[0] == "VTAB_RANGE":
                rows = []
                for r, t in sp[1]:
                    lo, hi = r.split("..")
                    rows.append("      %s %s %s\n" % (lo, hi, q(t)))
                out.append("    /begin COMPU_VTAB_RANGE %s_VT \"\" %d\n%s    /end COMPU_VTAB_RANGE\n"
                           % (name, len(rows), "".join(rows)))
                out.append("    /begin COMPU_METHOD %s \"\"\n      TAB_VERB \"%%12.0\" %s\n"
                           "      COMPU_TAB_REF %s_VT\n    /end COMPU_METHOD\n" % (name, q(sp[2]), name))
            else:  # TAB
                out.append("    /begin COMPU_TAB %s_TAB \"\" TAB_NOINTP %d\n%s    /end COMPU_TAB\n" % (
                    name, len(sp[1]), "".join("      %s %s\n" % (r, fnum(frac(p))) for r, p in sp[1])))
                out.append("    /begin COMPU_METHOD %s \"\"\n      TAB_NOINTP \"%%8.3\" %s\n"
                           "      COMPU_TAB_REF %s_TAB\n    /end COMPU_METHOD\n" % (name, q(sp[2]), name))
        return "".join(out)


def q(s):
    return '"%s"' % str(s).replace("\\", "\\\\").replace('"', '\\"')


def fmt(keys, default="%8.3"):
    f = keys.get("fmt")
    return "%" + f if f else default


# ---- generation ------------------------------------------------------------------------------
def generate(output, link_symbols=None):
    paths = sorted(glob.glob(os.path.join(FW, "**", "*.inc"), recursive=True) +
                   glob.glob(os.path.join(FW, "**", "*.a66"), recursive=True))
    paths = [p for p in paths if ";@a2l" in open(p, encoding="utf-8", errors="replace").read()]
    objects, standalone = scan(paths)

    addr = include_symbols(paths)
    if link_symbols:
        for k, v in link_symbols.items():
            addr.setdefault(k.lower(), v)

    convs = Convs()
    proj = {"PROJECT": ("OPENGK", ""), "MODULE": ("MODULE", ""), "VERSION": "", "EPK": None,
            "MEMORY": [], "CCP": {}, "CCP_PAGE": []}
    for toks, where in standalone:
        k = toks[0]
        if k == "CONV":
            convs.add(toks[1:], where)
        elif k in ("PROJECT", "MODULE"):
            proj[k] = (toks[1], toks[2] if len(toks) > 2 else "")
        elif k == "VERSION":
            proj[k] = toks[1]
        elif k == "EPK":
            proj[k] = (int(toks[1], 0), toks[2])
        elif k == "MEMORY":
            proj[k].append(toks[1:])
        elif k == "CCP":
            proj[k] = kv(toks[1:])[1]
        elif k == "CCP_PAGE":
            if len(toks) < 5:
                raise A2LError("%s: CCP_PAGE <no> \"name\" <addr> <size> <flag>..." % where)
            proj[k].append(toks[1:])
        else:
            raise A2LError("%s: unknown ;@a2l %s" % (where, k))

    # symbol -> A2L name / object
    by_sym, used_names = {}, set()
    for sym, kind, toks, where in objects:
        pos, keys = kv(toks)
        if not pos or pos[0] not in DTYPES:
            raise A2LError("%s: %s %s: missing or unknown data type" % (where, kind, sym))
        if sym.lower() not in addr:
            raise A2LError("%s: no address for symbol %s (labels in modules need tools/build.py)"
                           % (where, sym))
        if "conv" in keys and keys["conv"] not in convs.spec:
            raise A2LError("%s: %s: unknown conversion %s" % (where, sym, keys["conv"]))
        name = keys.get("name", sym)
        if name.lower() in used_names:
            raise A2LError("%s: A2L name %s used twice" % (where, name))
        used_names.add(name.lower())
        desc = pos[1] if len(pos) > 1 else ""
        by_sym.setdefault(sym.lower(), []).append(dict(sym=sym, kind=kind, dt=pos[0], keys=keys,
                                                       desc=desc, name=name, where=where,
                                                       addr=addr[sym.lower()]))
    objs = [o for lst in by_sym.values() for o in lst]

    def axis(sym, where):
        for o in by_sym.get(sym.lower(), []):
            if o["kind"] == "AXIS":
                return o
        raise A2LError("%s: %s is not an annotated AXIS" % (where, sym))

    meas_by_a2l_name = {o["name"].lower(): o["name"] for o in objs if o["kind"] == "MEASUREMENT"}

    def meas_name(sym):
        """input=: a code symbol, or an A2L name given with name= (e.g. 'n')."""
        for o in by_sym.get((sym or "").lower(), []):
            if o["kind"] == "MEASUREMENT":
                return o["name"]
        return meas_by_a2l_name.get((sym or "").lower(), "NO_INPUT_QUANTITY")

    used_conv, layouts = set(), {}

    def rl(kind, dt):
        name = "RL_%s_%s" % (kind, dt)
        if kind == "VAL":
            layouts[name] = "      FNC_VALUES 1 %s COLUMN_DIR DIRECT\n" % dt
        else:   # axis: count of the points' width, then the points
            cnt = "UWORD" if DTYPES[dt][0] == 2 else "UBYTE"
            layouts[name] = "      NO_AXIS_PTS_X 1 %s\n      AXIS_PTS_X 2 %s INDEX_INCR DIRECT\n" % (cnt, dt)
        return name

    def conv_of(o):
        c = o["keys"].get("conv")
        if c is None:
            c = "_IDENTITY"
            convs.spec.setdefault(c, ("LINEAR", Fraction(1), Fraction(0), ""))
        used_conv.add(c)
        return c

    chars, axes_txt, meas, groups = [], [], [], collections.OrderedDict()
    for o in sorted(objs, key=lambda o: (o["addr"], o["name"])):
        size, signed = DTYPES[o["dt"]]
        cm = conv_of(o)
        lo, hi = convs.phys_range(cm, size, signed)
        disp = re.sub(r"[^A-Za-z0-9_]", "_", o["name"]).upper()
        if o["kind"] in ("VALUE", "CURVE", "MAP"):
            t = ["    /begin CHARACTERISTIC %s %s\n      %s 0x%X %s %s %s %s %s\n" % (
                o["name"], q(o["desc"]), o["kind"], o["addr"], rl("VAL", o["dt"]),
                fnum(convs.scale(cm) * 100), cm, fnum(lo), fnum(hi)),
                 "      FORMAT %s\n      DISPLAY_IDENTIFIER %s\n" % (q(fmt(o["keys"])), disp)]
            need = {"VALUE": [], "CURVE": ["x"], "MAP": ["x", "y"]}[o["kind"]]
            for k in need:
                if k not in o["keys"]:
                    raise A2LError("%s: %s %s needs %s=" % (o["where"], o["kind"], o["sym"], k))
                ax = axis(o["keys"][k], o["where"])
                acm = conv_of(ax)
                asz, asg = DTYPES[ax["dt"]]
                alo, ahi = convs.phys_range(acm, asz, asg)
                t.append("      /begin AXIS_DESCR COM_AXIS %s %s %s %s %s\n        AXIS_PTS_REF %s\n"
                         "      /end AXIS_DESCR\n" % (meas_name(ax["keys"].get("input")), acm,
                                                    ax["keys"]["n"], fnum(alo), fnum(ahi), ax["name"]))
            t.append("    /end CHARACTERISTIC\n")
            chars.append("".join(t))
            groups.setdefault(o["desc"] or "ungrouped", []).append(o["name"])
        elif o["kind"] == "AXIS":
            axes_txt.append(
                "    /begin AXIS_PTS %s %s\n      0x%X %s %s %s %s %s %s %s\n"
                "      FORMAT %s\n      DISPLAY_IDENTIFIER %s\n    /end AXIS_PTS\n" % (
                    o["name"], q(o["desc"]), o["addr"], meas_name(o["keys"].get("input")),
                    rl("AXIS", o["dt"]), fnum(convs.scale(cm) * 100), cm, o["keys"]["n"],
                    fnum(lo), fnum(hi), q(fmt(o["keys"])), disp))
        else:
            t = ["    /begin MEASUREMENT %s %s\n      %s %s 1 100 %s %s\n" % (
                o["name"], q(o["desc"]), o["dt"], cm, fnum(lo), fnum(hi)),
                 "      ECU_ADDRESS 0x%X\n      FORMAT %s\n      DISPLAY_IDENTIFIER %s\n" % (
                     o["addr"], q(fmt(o["keys"])), disp)]
            if "mask" in o["keys"]:
                t.append("      BIT_MASK %s\n" % o["keys"]["mask"])
            t.append("    /end MEASUREMENT\n")
            meas.append("".join(t))

    grp, gnames = [], set()
    for i, (title, names) in enumerate(groups.items(), 1):
        g = "G%d_%s" % (i, re.sub(r"[^A-Za-z0-9_]", "_", title)[:48])
        grp.append("    /begin GROUP %s %s ROOT\n      /begin REF_CHARACTERISTIC\n%s"
                   "      /end REF_CHARACTERISTIC\n    /end GROUP\n"
                   % (g, q(title), "".join("        %s\n" % n for n in names)))

    mem = "".join("      /begin MEMORY_SEGMENT %s %s %s %s INTERN %s %s -1 -1 -1 -1 -1\n"
                  "      /end MEMORY_SEGMENT\n" % (m[0], q(m[5] if len(m) > 5 else ""), m[1], m[2], m[3], m[4])
                  for m in proj["MEMORY"])
    ccp = proj["CCP"]
    ccp_txt = ""
    if ccp:
        page = "".join("        /begin DEFINED_PAGES\n          %s %s 0 %s %s\n%s        /end DEFINED_PAGES\n"
                       % (p[0], q(p[1]), p[2], p[3], "".join("          %s\n" % f for f in p[4:]))
                       for p in proj["CCP_PAGE"])
        page += "".join("        OPTIONAL_CMD %s\n" % c
                        for c in ccp.get("optional_cmd", "").split(",") if c)
        seed = ""
        if "seed_key" in ccp:       # same DLL for the CAL, DAQ and PGM privileges
            dll = q(ccp["seed_key"])
            seed = "      /begin SEED_KEY\n        %s %s %s\n      /end SEED_KEY\n" % (dll, dll, dll)
        ccp_txt = ("    /begin IF_DATA ASAP1B_CCP\n%s      /begin TP_BLOB\n"
                   "        0x0201 0x0204 %s %s %s 2\n        BAUDRATE %s\n%s      /end TP_BLOB\n"
                   "    /end IF_DATA\n" % (seed, ccp["cro"], ccp["dto"], ccp["station"], ccp["baud"], page))
    aml = open(AML, encoding="latin-1").read()

    out = ["/* A2L generated by tools/gen_a2l.py from the ;@a2l annotations in firmware/.\n"
           "   Do not edit; change the annotations. */\n",
           "ASAP2_VERSION 1 71\n/begin PROJECT %s %s\n" % (proj["PROJECT"][0], q(proj["PROJECT"][1])),
           "  /begin HEADER \"\"\n    VERSION %s\n    PROJECT_NO %s\n  /end HEADER\n"
           % (q(proj["VERSION"]), proj["MODULE"][0]),
           "  /begin MODULE %s %s\n" % (proj["MODULE"][0], q(proj["MODULE"][1])),
           "    /begin A2ML\n      block \"IF_DATA\" taggedunion if_data {\n%s\n      };\n    /end A2ML\n" % aml,
           "    /begin MOD_PAR \"\"\n"]
    if proj["EPK"]:
        out.append("      ADDR_EPK 0x%X\n      EPK %s\n" % (proj["EPK"][0], q(proj["EPK"][1])))
    out += [mem, "    /end MOD_PAR\n",
            "    /begin MOD_COMMON \"\"\n      DEPOSIT ABSOLUTE\n      BYTE_ORDER MSB_LAST\n"
            "      ALIGNMENT_BYTE 1\n      ALIGNMENT_WORD 1\n      ALIGNMENT_LONG 1\n    /end MOD_COMMON\n",
            ccp_txt]
    out += chars + axes_txt + meas
    out.append(convs.text(used_conv))
    out += ["    /begin RECORD_LAYOUT %s\n%s    /end RECORD_LAYOUT\n" % (n, b) for n, b in sorted(layouts.items())]
    out += grp
    out.append("  /end MODULE\n/end PROJECT\n")

    os.makedirs(os.path.dirname(os.path.abspath(output)), exist_ok=True)
    # UTF-8 with byte-order mark (ASAP2 1.71): units/descriptions use degree signs etc.
    with open(output, "w", encoding="utf-8-sig", newline="\n") as fh:
        fh.write("".join(out))
    return dict(characteristics=len(chars), axes=len(axes_txt), measurements=len(meas),
                conversions=len(used_conv), groups=len(grp))


def main():
    ap = argparse.ArgumentParser(description=__doc__.split("\n")[0])
    ap.add_argument("-o", "--output", default=os.path.join(REPO, "build", "out", "opengk01.a2l"))
    args = ap.parse_args()
    try:
        st = generate(args.output)
    except A2LError as e:
        sys.exit("A2L: " + str(e))
    print("a2l   %s: %s" % (os.path.relpath(args.output, os.getcwd()),
                            ", ".join("%d %s" % (v, k) for k, v in st.items())))


if __name__ == "__main__":
    main()
