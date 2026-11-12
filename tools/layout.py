"""Placement of the application modules: firmware/layout.txt is the linker script.

Application modules don't carry an address in their source (`SECTION CODE`, no
`AT`); this file decides where each one goes.  Format:

    region <name> <start> <end>     an address range (end exclusive), usually one
                                    64 KB segment
        asw/tq/tq_t1.a66            modules in placement order, packed back to back
                                    (word aligned), paths relative to firmware/
        @0xAD900                    move the placement cursor forward to an address
        *                           every module not listed anywhere (new code,
                                    firmware/custom/) goes here, in path order

A region that overflows, or an `@` behind the cursor, is a build error.  A few
modules keep a fixed `AT` in their source (the header, vector trampolines and
constant tables in page 28h); they aren't listed here.

C166 near calls and jumps (CALLA/JMPA/JMPR, jump tables, offset-only pointers)
only reach inside the current 64 KB segment, and openc166 doesn't check that
across modules, so check_near() verifies every one after linking.
"""
import collections
import hashlib
import json
import os
import re

import openc166

SECTION_RE = re.compile(rb"^([ \t]*([\w?]+)[ \t]+SECTION[ \t]+CODE)([ \t]+AT[ \t]+0*([0-9A-F]+)H)?",
                        re.I | re.M)


class LayoutError(Exception):
    pass


def section_of(src):
    """(section name, fixed address or None) of a module's single code section."""
    found = SECTION_RE.findall(src)
    if len(found) != 1:
        raise LayoutError("expected exactly one SECTION CODE, found %d" % len(found))
    head, name, at, addr = found[0]
    return name.decode(), (int(addr, 16) if at else None)


def read(path):
    regions, cur = [], None
    for n, raw in enumerate(open(path, encoding="utf-8"), 1):
        line = raw.split("#", 1)[0].strip()
        if not line:
            continue
        where = "%s:%d" % (os.path.basename(path), n)
        t = line.split()
        if t[0] == "region":
            if len(t) != 4:
                raise LayoutError("%s: region <name> <start> <end>" % where)
            cur = {"name": t[1], "start": int(t[2], 0), "end": int(t[3], 0), "items": [], "where": where}
            regions.append(cur)
        elif cur is None:
            raise LayoutError("%s: entry outside a region" % where)
        elif t[0].startswith("@"):
            cur["items"].append(("at", int(t[0][1:], 0), where))
        elif t[0] == "*":
            cur["items"].append(("rest", None, where))
        else:
            cur["items"].append(("mod", t[0], where))
    return regions


def place(regions, sizes, fixed):
    """addresses for every movable module.

    sizes: {module path (relative to firmware/): size}; fixed: modules with an AT.
    Returns ({module: address}, [(region, used_end, end)]).
    """
    listed = [it[1] for r in regions for it in r["items"] if it[0] == "mod"]
    dup = [m for m, c in collections.Counter(listed).items() if c > 1]
    if dup:
        raise LayoutError("listed twice in layout.txt: %s" % ", ".join(dup))
    for m in listed:
        if m not in sizes:
            raise LayoutError("layout.txt lists %s, which doesn't exist (or has a fixed AT)" % m)
    rest = sorted(m for m in sizes if m not in set(listed) and m not in fixed)
    if rest and not any(it[0] == "rest" for r in regions for it in r["items"]):
        raise LayoutError("modules not in layout.txt and no '*' entry: %s" % ", ".join(rest))

    addr, usage = {}, []
    for r in regions:
        cur = r["start"]
        for kind, val, where in r["items"]:
            if kind == "at":
                if val < cur:
                    raise LayoutError("%s: @0x%05X, but region %s is already filled to 0x%05X "
                                      "(%d bytes too many before it)" % (where, val, r["name"], cur, cur - val))
                cur = val
                continue
            for m in ([val] if kind == "mod" else rest):
                cur += cur & 1
                addr[m] = cur
                cur += sizes[m]
        if cur > r["end"]:
            raise LayoutError("region %s (0x%05X-0x%05X) overflows by %d bytes: move a module to "
                              "another region in firmware/layout.txt" % (r["name"], r["start"], r["end"], cur - r["end"]))
        usage.append((r["name"], r["start"], cur, r["end"]))
    return addr, usage


def link(files, include_dirs, layout_path, fw_dir, cache=None):
    """link the application per layout.txt.

    Module sizes come from assembling each module on its own (instruction sizes
    don't depend on the address: the code uses fixed-size forms), cached in
    `cache` by source and include-file content; then one link places every
    section at its layout address.  If a linked size differs from the one used,
    the placement is redone.  Returns (openc166 result, {module: address},
    region usage); address map and usage are None when the link failed.
    """
    srcs = [(f, open(f, "rb").read()) for f in files]
    rel = {f: os.path.relpath(f, fw_dir) for f, _ in srcs}
    sec, fixed = {}, set()
    for f, s in srcs:
        try:
            sec[f], at = section_of(s)
        except LayoutError as e:
            raise LayoutError("%s: %s" % (rel[f], e))
        if at is not None:
            fixed.add(rel[f])

    inc = hashlib.sha256(getattr(openc166, "__version__", "").encode())
    for d in include_dirs:
        for n in sorted(os.listdir(d)):
            if n.lower().endswith(".inc"):
                inc.update(n.encode() + open(os.path.join(d, n), "rb").read())
    old = {}
    if cache and os.path.exists(cache):
        try:
            c = json.load(open(cache))
            old = c["sizes"] if c.get("includes") == inc.hexdigest() else {}
        except (ValueError, KeyError):
            old = {}
    sizes, new = {}, {}
    for f, s in srcs:
        m = rel[f]
        if m in fixed:
            continue
        h = hashlib.sha256(s).hexdigest()
        if m in old and old[m][0] == h:
            sizes[m] = old[m][1]
        else:
            r1 = openc166.assemble(s, file_name=f, include_dirs=include_dirs)
            if sec[f] not in r1.sections:     # broken module: the link reports why
                sizes[m] = 0
                continue
            sizes[m] = r1.sections[sec[f]].size
        new[m] = (h, sizes[m])

    regions = read(layout_path)
    for _ in range(3):
        addr, usage = place(regions, sizes, fixed)
        r = openc166.assemble_many(srcs, include_dirs=include_dirs, origin=0,
                                   sections={sec[f]: addr[rel[f]] for f, _ in srcs if rel[f] in addr})
        if not r.ok:
            return r, None, None
        actual = {rel[f]: r.sections[sec[f]].size for f, _ in srcs if rel[f] in addr}
        if actual == sizes:
            break
        sizes = actual
        new = {m: (new[m][0], sizes[m]) for m in new}
    if cache:
        os.makedirs(os.path.dirname(cache), exist_ok=True)
        json.dump({"includes": inc.hexdigest(), "sizes": new}, open(cache, "w"))
    return r, addr, usage


# ---- near reference check -----------------------------------------------------------

NEAR_RE = re.compile(r"^\s*(?:[\w?]+:)?\s*(CALLA|JMPA|JMPR|JB|JNB|JBC|JNBS)\b[^,]*,\s*([\w?]+)\s*$"
                     r"|^\s*(?:[\w?]+:)?\s*(CALLR)\s+([\w?]+)\s*$", re.I)
SOF_RE = re.compile(r"\bSOF\s+([\w?]+)", re.I)


def listing_lines(r):
    """(module, source line, address, source) for every top-level line of an openc166 listing."""
    out, mod, n, body = [], None, 0, False
    for raw in r.listing.split("\n"):
        if raw.startswith("MODULE "):
            mod, n, body = raw[7:].strip(), 0, False
            continue
        if raw.startswith("LOC "):
            body = True
            continue
        if raw.startswith(("SYMBOLS", "SECTIONS")):
            body = False
        if not body or raw.startswith("***") or not raw.strip():
            continue
        if raw[27:31].strip().startswith("+"):
            continue            # include-file line
        # fixed columns: LOC 0-7, OBJ 10-26, LINE right-aligned ending at 34, SOURCE from 39
        # (rows without a line number continue the object bytes of a long line)
        if not raw[29:35].strip().isdigit():
            continue
        n += 1
        loc, src = raw[0:8].strip(), raw[39:]
        addr = int(loc, 16) if loc and not loc.startswith("=") else None   # '=': EQU value
        out.append((mod, n, addr, src))
    return out


def check_near(r, lines=None):
    """near references that would land in another 64 KB segment.

    - CALLA/JMPA/JMPR/JB.../CALLR <label>: the label's segment = the instruction's
    - an offset-only pointer (SOF x without SEG on the line): x in the segment of
      the code holding it -- the code that jumps through it lives there too
    - a jump table (`;@jumptable <dispatcher>` above DW SOF entries): every entry
      in the dispatcher's segment
    Returns [(module, line, message, module of the target)].
    """
    lines = lines or listing_lines(r)
    val, owner = {}, {}
    for s in r.all_symbols:
        if s.kind == "label":
            val[s.name.upper()] = s.value
            owner[s.name.upper()] = s.module
    bad = []
    table = None
    for mod, line, addr, src in lines:
        code = src.split(";", 1)[0]
        m = re.match(r"\s*;@jumptable\s+([\w?]+)", src)
        if m:
            table = m.group(1).upper()
            continue
        if re.match(r"\s*DW\s+SOF\s+[\w?]+\s*(;|$)", src, re.I):
            t = SOF_RE.search(code).group(1).upper()
            ref = val.get(table) if table else addr
            if t in val and ref is not None and val[t] >> 16 != ref >> 16:
                bad.append((mod, line, "jump-table entry %s (0x%05X) not in the segment of %s (0x%05X)"
                            % (t, val[t], table or "the table", ref), owner.get(t)))
            continue
        if code.strip() and not code.strip().startswith(("DW", "DB")) \
                and not re.fullmatch(r"[\w?]+:", code.strip()):
            table = None
        if addr is None:
            continue
        m = NEAR_RE.match(code)
        if m:
            t = (m.group(2) or m.group(4)).upper()
            if t in val and val[t] >> 16 != addr >> 16:
                bad.append((mod, line, "%s %s: target 0x%05X is in another segment"
                            % ((m.group(1) or m.group(3)).upper(), t, val[t]), owner.get(t)))
            continue
        m = SOF_RE.search(code)
        if m and not re.search(r"\bSEG\b", code, re.I) and not code.strip().upper().startswith("DW"):
            t = m.group(1).upper()
            if t in val and val[t] >> 16 != addr >> 16:
                bad.append((mod, line, "SOF %s: offset-only pointer to 0x%05X in another segment"
                            % (t, val[t]), owner.get(t)))
    return bad
