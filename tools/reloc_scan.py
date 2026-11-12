#!/usr/bin/env python3
"""List raw (numeric) references into movable application code.

Modules can only be unpinned (SECTION ... AT dropped) once nothing refers to
their code or data by number.  RAM, SFRs, calibration (0x90000), the boot units
and the pinned low block of the application (header, vector trampolines and the
constant tables in page 28h, below PIN_END) don't move, so references to them
may stay numeric.  This tool reports every numeric operand or data word that
points at movable application code/data:

  ext     EXTP/EXTS with an immediate page (29h-3Fh) / segment (0Ah-0Fh)
  dpp     DPPn:<number> operand inside the movable range
  dppset  MOV DPPn,#page with a movable page
  segimm  MOV Rn,#segment/page next to a MOV Rm,#offset that together point at
          movable code: a far pointer built in registers
  data    DB/DW data holding an (offset, segment) far pointer to an instruction,
          or an (offset, page) pointer to a label, in movable code
  codeimm MOV Rn,#number into a register that a JMPI [Rn] jumps through (same bank)
  jmpi    a JMPI dispatch whose jump table isn't symbolic (DW SOF ...), or whose
          table couldn't be identified

A finding checked to need no relocation (a constant, a pointer covered elsewhere) is
acknowledged with ';@reloc-ok' at the end of
its line.  Exit status 1 while unacknowledged findings remain.

Usage: python3 tools/reloc_scan.py [--all] [--cat CAT] [--file SUBSTR]
"""
import argparse
import collections
import glob
import os
import re
import sys

import openc166

REPO = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
FW = os.path.join(REPO, "firmware")
INC = [os.path.join(FW, "inc"), os.path.join(FW, "cal")]
ASW_ORIGIN = 0xE5E0C
PIN_END = 0xA3F1A           # header, trampolines, page-28h constant tables stay put
ASW_END = 0x100000
DPP1_PAGE = 0x28            # DPP1 = page 28h (0xA0000) throughout the application

NUM = r"0*([0-9A-F]+)H"
IMM = r"#(?:DATA16\s+)?" + NUM


def movable(a):
    return PIN_END <= a < ASW_END


def link():
    files = sorted(glob.glob(os.path.join(FW, "asw", "**", "*.a66"), recursive=True))
    files += sorted(glob.glob(os.path.join(FW, "custom", "**", "*.a66"), recursive=True))
    r = openc166.assemble_many([(f, open(f, "rb").read()) for f in files],
                               include_dirs=INC, origin=ASW_ORIGIN)
    if not r.ok:
        sys.exit("asw link failed")
    return r


def listing_lines(r):
    """(file, source line, address, source) for every top-level source line."""
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


def data_bytes(src):
    """bytes of a DB/DW line with numeric operands only (None otherwise)."""
    m = re.match(r"\s*(D[BW])\s+([^;]*)", src, re.I)
    out = bytearray()
    for t in m.group(2).split(","):
        t = t.strip().upper()
        if not re.fullmatch(r"0*[0-9A-F]+H|\d+", t):
            return None
        v = int(t[:-1], 16) if t.endswith("H") else int(t)
        out += bytes([v & 0xFF]) if m.group(1).upper() == "DB" else bytes([v & 0xFF, v >> 8])
    return bytes(out)


def is_insn(src):
    t = src.split(";", 1)[0].strip()
    return bool(t) and not re.fullmatch(r"[\w?]+:", t) and not re.match(r"(D[BW]|DS)\s", t, re.I) \
        and "SECTION" not in t.upper() and " EQU " not in t.upper()


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--all", action="store_true", help="also list acknowledged (;@reloc-ok) findings")
    ap.add_argument("--cat")
    ap.add_argument("--file")
    a = ap.parse_args()

    r = link()
    lines = listing_lines(r)
    labels = collections.defaultdict(list)      # address -> code label names
    for s in r.all_symbols:
        if s.kind == "label" and 0xA0000 <= s.value < ASW_END:
            labels[s.value].append(s.name)
    insn = {addr for _, _, addr, src in lines if addr is not None and is_insn(src)}
    sym_rows = {addr for _, _, addr, src in lines            # data rows written with symbols
                if addr is not None and re.match(r"\s*DW\s+.*\b(SOF|POF)\b", src, re.I)}

    found = []

    def add(cat, mod, line, addr, src, why):
        found.append((cat, mod, line, addr, src.strip(), why, ";@reloc-ok" in src))

    # register banks: ISRs switch banks (SCXT CP,#bank) and some resume through a code
    # pointer kept in a bank register (JMPI [Rn]); any MOV Rn,#number into such a
    # register, in that bank's context, is a code pointer
    def bank_walk():
        mod_prev, bank = None, None
        for i, (mod, line, addr, src) in enumerate(lines):
            if mod != mod_prev or src.lstrip().startswith("; ========"):
                mod_prev, bank = mod, None          # new module / function: bank unknown
            m = re.match(r"\s*(?:[\w?]+:)?\s*SCXT\s+CP\s*,\s*" + IMM, src.split(";", 1)[0], re.I)
            if m:
                bank = int(m.group(1), 16)
            yield i, mod, bank
    jmpi_regs = set()
    for i, mod, bank in bank_walk():
        m = re.match(r"\s*JMPI\s+cc_\w+\s*,\s*\[(R\d+)\]", lines[i][3], re.I)
        if m:
            if bank is not None:
                jmpi_regs.add((bank, m.group(1).upper()))
    for i, mod, bank in bank_walk():
        line, addr, src = lines[i][1:]
        m = re.match(r"\s*(?:[\w?]+:)?\s*MOV\s+(R\d+)\s*,\s*" + IMM + r"\s*$", src.split(";", 1)[0], re.I)
        if m and addr is not None and (bank, m.group(1).upper()) in jmpi_regs:
            t = (addr & 0xF0000) | int(m.group(2), 16)
            if movable(t) and t in insn:
                add("codeimm", mod, line, addr, src, "code pointer 0x%05X for JMPI [%s]" % (t, m.group(1)))

    for i, (mod, line, addr, src) in enumerate(lines):
        code = src.split(";", 1)[0]
        u = code.upper()
        m = re.search(r"\bEXT(P|S)R?\s+#" + NUM, u)
        if m:
            v = int(m.group(2), 16)
            if (m.group(1) == "P" and 0x29 <= v <= 0x3F) or (m.group(1) == "S" and 0xA <= v <= 0xF):
                add("ext", mod, line, addr, src, "EXT%s %02Xh" % (m.group(1), v))
        for m in re.finditer(r"\bDPP([0-3]):" + NUM, u):
            if movable(int(m.group(2), 16)):
                add("dpp", mod, line, addr, src, "0x%05X" % int(m.group(2), 16))
        m = re.match(r"\s*(?:[\w?]+:)?\s*MOV\s+DPP[0-3]\s*,\s*" + IMM, u)
        if m and 0x29 <= int(m.group(1), 16) <= 0x3F:
            add("dppset", mod, line, addr, src, "page %s" % m.group(1))

        # far pointer built in registers: MOV Rn,#seg|page with a MOV Rm,#offset nearby
        m = re.match(r"\s*(?:[\w?]+:)?\s*MOV\s+R\d+\s*,\s*" + IMM + r"\s*$", u)
        if m:
            v = int(m.group(1), 16)
            if 0xA <= v <= 0xF or 0x29 <= v <= 0x3F:
                for k in range(max(0, i - 4), min(len(lines), i + 5)):
                    if k == i or lines[k][0] != mod:
                        continue
                    mm = re.match(r"\s*(?:[\w?]+:)?\s*MOV\s+R\d+\s*,\s*" + IMM + r"\s*$",
                                  lines[k][3].split(";", 1)[0].upper())
                    if not mm:
                        continue
                    off = int(mm.group(1), 16)
                    t = (v << 16 | off) if v <= 0xF else v * 0x4000 + (off & 0x3FFF)
                    if movable(t) and (t in insn or t in labels):
                        add("segimm", mod, line, addr, src, "with #%04Xh -> 0x%05X" % (off, t))
                        break

        # pointers in numeric data
        obj = data_bytes(src) if re.match(r"\s*D[BW]\s", u) else None
        if addr is not None and obj and addr % 2 == 0:
            w = [obj[j] | obj[j + 1] << 8 for j in range(0, len(obj) - 1, 2)]
            for j in range(len(w) - 1):
                off, hi = w[j], w[j + 1]
                if 0xA <= hi <= 0xF and movable(hi << 16 | off) and (hi << 16 | off) in insn:
                    t = hi << 16 | off
                    add("data", mod, line, addr + 2 * j, src[:60],
                        "far ptr -> 0x%05X %s" % (t, labels.get(t, [""])[0]))
                elif 0x29 <= hi <= 0x3F and off < 0x4000 and (hi * 0x4000 + off) in labels:
                    add("data", mod, line, addr + 2 * j, src[:60],
                        "page ptr -> %s" % labels[hi * 0x4000 + off][0])

        # JMPI through a jump table: the table must be symbolic
        if addr is not None and re.match(r"\s*JMPI\s+cc_\w+\s*,\s*\[R\d+\]", code, re.I):
            tab = None
            for k in range(max(0, i - 3), i):
                p = lines[k][3].split(";", 1)[0].upper()
                mm = re.search(r"\+#(?:DATA16\s+)?" + NUM + r"\]", p) or \
                    re.search(r"ADD\s+R\d+\s*,\s*" + IMM, p)
                if mm:
                    tab = int(mm.group(1), 16)
            if tab is None or not 0x4000 <= tab < 0x8000:
                add("jmpi", mod, line, addr, src, "jump table not identified")
            else:
                ta = DPP1_PAGE * 0x4000 + tab - 0x4000
                if ta not in sym_rows:
                    add("jmpi", mod, line, addr, src, "table 0x%05X not symbolic" % ta)

    sel = [f for f in found if (a.all or not f[6]) and (not a.cat or f[0] == a.cat)
           and (not a.file or a.file in f[1])]
    for cat, mod, line, addr, src, why, ack in sel:
        print("%-6s %s:%d  %s  %-44s %s%s" % (cat, os.path.relpath(mod, REPO) if os.path.isabs(mod) else mod,
                                            line, "%06X" % addr if addr is not None else "------",
                                            src[:70], why, "  (ack)" if ack else ""))
    cnt = collections.Counter(f[0] for f in found if not f[6])
    ackd = sum(1 for f in found if f[6])
    print("\nopen: %s   acknowledged: %d" % (", ".join("%s %d" % kv for kv in sorted(cnt.items())) or "none", ackd))
    sys.exit(1 if cnt else 0)


if __name__ == "__main__":
    main()
