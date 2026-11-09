#!/usr/bin/env python3
"""SIMK43 (OPENGK01, 4 Mbit "FL2" layout) region checksums.

Each region has a checksum table in flash:

    +0  u16 LE   stored CRC
    +2  u8       number of zones N
    +3  u8       reserved
    +4  N x { u32 LE start, u32 LE end }      physical addresses, end inclusive

The CRC is CRC-16, polynomial 0x8005 in reflected form (0xA001), no final XOR.
Zone 1 starts from the u16 LE init value stored in the region; each further zone
continues from the previous zone's CRC.  The last CRC is the stored value.
Physical address -> file offset is `addr & 0x7FFFF` (512 KB flash, mirrored).

Same scheme as gkflasher's flasher/checksum.py ("4mbit (FL2)" entry), which this
was checked against.

Usage: python3 tools/checksum.py image.bin [--fix]
"""
import sys

# name, checksum table (file offset), init value (file offset)
REGIONS = [
    ("Boot", 0x3EEC, 0x3FE4),
    ("Calibration", 0x17EE0, 0x1000C),
    ("Program", 0x20010, 0x20052),
]

_TABLE = []
for _i in range(256):
    _c = _i
    for _ in range(8):
        _c = (_c >> 1) ^ 0xA001 if _c & 1 else _c >> 1
    _TABLE.append(_c)


def crc16(data, init):
    c = init
    for b in data:
        c = (c >> 8) ^ _TABLE[(c ^ b) & 0xFF]
    return c


def zones(img, table):
    n = img[table + 2]
    if n in (0, 0xFF):
        return []
    out = []
    for z in range(n):
        p = table + 4 + 8 * z
        s = int.from_bytes(img[p:p + 4], "little") & 0x7FFFF
        e = (int.from_bytes(img[p + 4:p + 8], "little") & 0x7FFFF) + 1
        out.append((s, e))
    return out


def compute(img, table, init_at):
    c = int.from_bytes(img[init_at:init_at + 2], "little")
    for s, e in zones(img, table):
        c = crc16(img[s:e], c)
    return c


def check(img):
    """[(name, stored, computed, zones)] for every region."""
    res = []
    for name, table, init_at in REGIONS:
        stored = int.from_bytes(img[table:table + 2], "little")
        res.append((name, stored, compute(img, table, init_at), zones(img, table)))
    return res


def fix(img):
    """Rewrite every region's stored CRC in place (img: bytearray)."""
    res = check(img)
    for (name, table, _), (_, _, computed, _) in zip(REGIONS, res):
        img[table:table + 2] = computed.to_bytes(2, "little")
    return res


def covered(img):
    """Set of [start, end) file ranges protected by any region checksum."""
    return [z for _, table, _ in REGIONS for z in zones(img, table)]


if __name__ == "__main__":
    if len(sys.argv) < 2:
        sys.exit(__doc__)
    path = sys.argv[1]
    img = bytearray(open(path, "rb").read())
    res = fix(img) if "--fix" in sys.argv else check(img)
    bad = 0
    for name, stored, comp, zs in res:
        ok = stored == comp
        bad += not ok
        print("%-12s stored %04X computed %04X  %s  zones: %s" % (
            name, stored, comp, "OK" if ok else "MISMATCH",
            ", ".join("%05X-%05X" % (s, e - 1) for s, e in zs)))
    if "--fix" in sys.argv:
        open(path, "wb").write(img)
        print("fixed %d region(s) in %s" % (bad, path))
    sys.exit(0 if (bad == 0 or "--fix" in sys.argv) else 1)
