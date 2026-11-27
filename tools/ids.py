"""ECU identification strings from firmware/ids.txt.

The four version strings diagnostic tools read sit at fixed addresses in the
boot info block, the calibration header and the application header.  build.py
calls apply() after linking, so firmware/ids.txt is the only place they are
set; gen_a2l.py takes the A2L's EPK from here too.
"""
import os
import re

REPO = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
IDS_FILE = os.path.join(REPO, "firmware", "ids.txt")
FLASH = 0x80000

# field: (length, linear addresses it is written to)
FIELDS = {
    "chassis": (8, (0x90000, 0x9004C)),
    "calibration": (6, (0x90008, 0xA0056)),
    "asw": (10, (0xA005C,)),
    "boot": (10, (0x3FDA,)),
}
EPK_ADDRESS = 0x90000        # chassis + calibration, as in the OEM A2Ls


class IdsError(Exception):
    pass


def read(path=IDS_FILE):
    """{field: value padded to its length} from ids.txt."""
    out = {}
    for n, raw in enumerate(open(path, encoding="ascii"), 1):
        line = raw.split("#", 1)[0].strip()
        if not line:
            continue
        where = "%s:%d" % (os.path.relpath(path, REPO), n)
        t = line.split()
        if len(t) != 2:
            raise IdsError("%s: expected '<field> <value>'" % where)
        name, value = t
        if name not in FIELDS:
            raise IdsError("%s: unknown field %r (known: %s)" % (where, name, ", ".join(FIELDS)))
        if name in out:
            raise IdsError("%s: %s given twice" % (where, name))
        size = FIELDS[name][0]
        if not re.fullmatch(r"[!-~]+", value):
            raise IdsError("%s: %s must be printable ASCII without spaces" % (where, name))
        if len(value) > size:
            raise IdsError("%s: %s %r is %d characters, the field holds %d" % (where, name, value, len(value), size))
        out[name] = value.ljust(size, "-")
    missing = [f for f in FIELDS if f not in out]
    if missing:
        raise IdsError("%s: missing %s" % (os.path.relpath(path, REPO), ", ".join(missing)))
    return out


def apply(img, ids=None):
    """write the strings into a 512 KB image (file offset = address & 0x7FFFF)."""
    ids = ids or read()
    for name, (size, addrs) in FIELDS.items():
        for a in addrs:
            off = a & (FLASH - 1)
            img[off:off + size] = ids[name].encode("ascii")
    return ids


def epk(ids=None):
    ids = ids or read()
    return ids["chassis"] + ids["calibration"]
