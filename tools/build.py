#!/usr/bin/env python3
"""Build the flashable 512 KB image from the firmware/ tree.

Link units (each is its own program, as the OEM built them separately):

  bsw   every firmware/bsw/*.a66, each assembled on its own
        (vectors + runtime helpers, boot info block, seg-8 bootloader)
  asw   firmware/asw/**/*.a66 + firmware/custom/**/*.a66, linked together in
        one openc166 run (EXTERN/PUBLIC resolved across files, like L166).
        Sections without AT (new code) are placed from ASW_ORIGIN on, i.e. in
        the erased flash after the application.
  cal   firmware/cal/opengk01.dat, copied to 0x90000 (file 0x10000)

Every byte lands at file offset `addr & 0x7FFFF`; two units writing the same
byte is an error.  Unwritten bytes stay 0xFF (erased flash).  Then the Boot,
Calibration and Program checksums are recomputed (tools/checksum.py).

Usage:
  python3 tools/build.py                 build -> build/out/opengk01.bin
  python3 tools/build.py --no-checksum   leave stored checksums as assembled
  python3 tools/build.py --no-a2l        skip the A2L (tools/gen_a2l.py, from the ;@a2l annotations)
"""
import argparse
import collections
import glob
import os
import sys
import time

import openc166

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
import checksum  # noqa: E402
import intel_hex  # noqa: E402

REPO = os.path.dirname(HERE)
FW_DIR = os.path.join(REPO, "firmware")
INC = [os.path.join(FW_DIR, "inc"), os.path.join(FW_DIR, "cal")]
FLASH = 0x80000
CAL_FILE, CAL_AT = os.path.join(FW_DIR, "cal", "opengk01.dat"), 0x10000
ASW_ORIGIN = 0xE5E0C        # first erased byte after the application code
# openc166 warnings the inherited code triggers (Keil-style lint, not errors):
# far/interrupt returns outside PROC, EXTR-window SFR checks, JMPS offset
# truncation, odd-address DPP arithmetic.  Counted, not printed.
QUIET = {"A62", "A78", "A80", "A110", "A111", "A134"}

ap = argparse.ArgumentParser(description=__doc__.split("\n")[0])
ap.add_argument("-o", "--output", default=os.path.join(REPO, "build", "out", "opengk01.bin"))
ap.add_argument("--no-checksum", action="store_true")
ap.add_argument("--no-a2l", action="store_true", help="don't generate the A2L next to the image")
ap.add_argument("-v", "--verbose", action="store_true", help="print every warning")
args = ap.parse_args()
output_base = os.path.splitext(args.output)[0]
bin_file = output_base + ".bin"
cpu_bin = output_base + "_8mbit.bin"
hex_file = output_base + "_8mbit.hex"

t0 = time.time()
img = bytearray(b"\xff" * FLASH)
owner = [None] * FLASH            # which unit wrote each byte (overlap check)
fail = False


def place(unit, addr, data):
    global fail
    for i, b in enumerate(data):
        off = (addr + i) & (FLASH - 1)
        if owner[off] is not None and owner[off] != unit:
            print("ERROR: %s and %s both write file offset 0x%05X" % (owner[off], unit, off))
            fail = True
            return
        owner[off] = unit
        img[off] = b


def report(unit, r):
    global fail
    for d in r.errors:
        print("  %s:%s: error %s %s" % (os.path.relpath(_file(d), REPO), d.line, d.code, d.message))
    warn = collections.Counter()
    for d in r.warnings:
        if d.code in QUIET and not args.verbose:
            warn[d.code] += 1
        else:
            print("  %s:%s: warning %s %s" % (os.path.relpath(_file(d), REPO), d.line, d.code, d.message))
    # OC1 = two sections overlap: a pinned module grew into its neighbour
    if not r.ok or any(d.code == "OC1" for d in r.warnings):
        fail = True
    return warn


def _file(d):
    f = getattr(d, "file", None) or ""
    return f.decode() if isinstance(f, bytes) else f


def link(unit, files, origin=0):
    srcs = [(f, open(f, "rb").read()) for f in files]
    r = openc166.assemble_many(srcs, include_dirs=INC, origin=origin)
    warn = report(unit, r)
    n = 0
    if r.ok:
        for ch in r.chunks:
            place(unit, ch.address, ch.data)
            n += len(ch.data)
    return r, n, warn


# ---- bsw ------------------------------------------------------------------------------
for f in sorted(glob.glob(os.path.join(FW_DIR, "bsw", "*.a66"))):
    r, n, w = link("bsw/" + os.path.basename(f), [f])
    print("bsw   %-28s %6d bytes%s" % (os.path.basename(f), n, "" if r.ok else "  FAILED"))

# ---- asw (+ custom) --------------------------------------------------------------------
asw = sorted(glob.glob(os.path.join(FW_DIR, "asw", "**", "*.a66"), recursive=True))
custom = sorted(glob.glob(os.path.join(FW_DIR, "custom", "**", "*.a66"), recursive=True))
r, n, w = link("asw", asw + custom, origin=ASW_ORIGIN)
asw_symbols = {sym.name: sym.value for sym in r.all_symbols} if r.ok else {}
print("asw   %d modules + %d custom    %6d bytes%s%s" % (
    len(asw), len(custom), n, "" if r.ok else "  FAILED",
    ("   (%s)" % ", ".join("%s x%d" % kv for kv in sorted(w.items()))) if w else ""))
if r.ok and custom:
    for s in r.sections.values():
        if s.placement != "at" and s.size:
            print("      custom section %-16s at 0x%06X, %d bytes" % (s.name, s.address, s.size))

# ---- cal ------------------------------------------------------------------------------
cal = open(CAL_FILE, "rb").read()
if len(cal) != 0x10000:
    print("ERROR: %s must be 64 KB" % CAL_FILE)
    fail = True
else:
    place("cal", CAL_AT, cal)
    print("cal   %-28s %6d bytes" % (os.path.basename(CAL_FILE), len(cal)))

if fail:
    sys.exit("build FAILED")

# ---- checksums ----------------------------------------------------------------------
if not args.no_checksum:
    for name, stored, comp, zs in checksum.fix(img):
        print("cks   %-12s %04X%s" % (name, comp, "" if stored == comp else "  (was %04X)" % stored))
    # code outside every checksum zone is not protected by the ECU's self-test
    zs = checksum.covered(img)
    loose = sum(1 for off in range(FLASH)
                if owner[off] == "asw" and img[off] != 0xFF and off >= 0x20210
                and not any(s <= off < e for s, e in zs))
    if loose:
        print("note  %d asw byte(s) lie outside the Program checksum zones" % loose)

os.makedirs(os.path.dirname(os.path.abspath(args.output)), exist_ok=True)
open(bin_file, "wb").write(img)
print("wrote %s (%.1fs)" % (os.path.relpath(bin_file, os.getcwd()), time.time() - t0))
with open(cpu_bin, "wb") as output:
    output.write(intel_hex.to_cpu_image(img))
print("wrote %s " % os.path.relpath(cpu_bin, os.getcwd()))
intel_hex.write_image(hex_file, img)
print("hex   %s" % os.path.relpath(hex_file, os.getcwd()))

# ---- A2L ------------------------------------------------------------------------------
# from the ;@a2l annotations in firmware/; the asw link's symbol table resolves
# annotated labels inside modules (e.g. new parameters in custom/)
if not args.no_a2l:
    import gen_a2l
    a2l = output_base + ".a2l"
    try:
        st = gen_a2l.generate(a2l, link_symbols=asw_symbols)
    except gen_a2l.A2LError as e:
        sys.exit("A2L FAILED: %s" % e)
    print("a2l   %s: %s" % (os.path.relpath(a2l, os.getcwd()), ", ".join("%d %s" % (v, k) for k, v in st.items())))
