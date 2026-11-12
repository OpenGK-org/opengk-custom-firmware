#!/usr/bin/env python3
"""Write a scrambled module layout, for testing that the application really relocates.

Reverses the module order inside every region of firmware/layout.txt (drops the
'@' gaps, so modules also shift by different amounts) and moves every Nth module
into the empty region F.  Near-coupled modules stay in their segment unless moved
to F; a module whose move breaks a near call is put back (the build's segment
check decides).  Nearly every function then sits at another address than in
the stock layout, while behaviour must stay the same.

Usage: python3 tools/layout_shuffle.py [-o build/test/layout_shuffled.txt] [--every N]
then:  python3 tools/build.py --layout build/test/layout_shuffled.txt -o build/test/opengk01_reloc.bin
"""
import argparse
import glob
import os
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
import layout  # noqa: E402

REPO = os.path.dirname(HERE)
FW = os.path.join(REPO, "firmware")
INC = [os.path.join(FW, "inc"), os.path.join(FW, "cal")]


def write(path, regions):
    with open(path, "w") as f:
        f.write("# scrambled layout from tools/layout_shuffle.py -- for relocation testing only\n")
        for r in regions:
            f.write("region %s 0x%05X 0x%05X\n" % (r["name"], r["start"], r["end"]))
            for kind, val, _ in r["items"]:
                f.write("    %s\n" % ("*" if kind == "rest" else val))
            f.write("\n")


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("-o", "--output", default=os.path.join(REPO, "build", "test", "layout_shuffled.txt"))
    ap.add_argument("--every", type=int, default=12, help="move every Nth module to region F")
    a = ap.parse_args()
    os.makedirs(os.path.dirname(a.output), exist_ok=True)

    regions = layout.read(os.path.join(FW, "layout.txt"))
    free = next(r for r in regions if r["name"] == "F")
    moved = []
    for r in regions:
        mods = [it for it in r["items"] if it[0] in ("mod", "rest")][::-1]
        keep = []
        for i, it in enumerate(mods):
            if it[0] == "mod" and r is not free and i % a.every == a.every // 2:
                moved.append(it)
            else:
                keep.append(it)
        r["items"] = keep
    free["items"] = moved

    files = sorted(glob.glob(os.path.join(FW, "asw", "**", "*.a66"), recursive=True))
    files += sorted(glob.glob(os.path.join(FW, "custom", "**", "*.a66"), recursive=True))
    while True:
        write(a.output, regions)
        r, addr, _ = layout.link(files, INC, a.output, FW,
                                 cache=os.path.join(REPO, "build", "cache", "sizes.json"))
        if not r.ok or addr is None:
            sys.exit("link failed")
        bad = layout.check_near(r)
        involved = {os.path.relpath(m, FW) for b in bad for m in (b[0], b[3]) if m}
        back = involved & {it[1] for it in free["items"]}
        if not bad:
            break
        if not back:        # a violation not caused by a move to F: report it
            for mod, line, msg, _ in bad:
                print("%s:%d: %s" % (mod, line, msg))
            sys.exit("scrambled layout breaks near references")
        # modules near-coupled to their old segment go back (to the front of it)
        for m in back:
            it = next(i for i in free["items"] if i[1] == m)
            free["items"].remove(it)
            home = next(rg for rg in regions if rg is not free and rg["start"] <= addr_home[m] < rg["end"])
            home["items"].insert(0, it)
        print("kept in their segment (near-coupled): %s" % ", ".join(sorted(back)))
    print("%s: %d modules reversed per region, %d moved to region F" % (
        os.path.relpath(a.output, os.getcwd()), sum(len(rg["items"]) for rg in regions), len(free["items"])))


# home segment of each module in the stock layout
_stock = layout.read(os.path.join(FW, "layout.txt"))
addr_home = {}
for _r in _stock:
    for _k, _v, _ in _r["items"]:
        if _k == "mod":
            addr_home[_v] = _r["start"]

if __name__ == "__main__":
    main()
