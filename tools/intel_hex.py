"""Build Intel HEX files in the padded 1 MiB CPU address space."""

def _record(address, kind, data=b""):
    payload = bytes([len(data)]) + address.to_bytes(2, "big") + bytes([kind]) + data
    return ":" + (payload + bytes([-sum(payload) & 0xFF])).hex().upper() + "\r\n"


def to_cpu_image(image):
    """Map a 512 KiB BIN into the padded 1 MiB CPU address space.

    The low 32 KiB holds boot vectors/info; the remaining bytes map from
    0x88000. Missing regions, including RSW, contain FF padding. Runtime RAM
    and SFR addresses are not populated from overlapping flash-file offsets.
    """
    if len(image) != 0x80000:
        raise ValueError("SIMK43 CPU mapping requires a 512 KiB image")

    memory = bytearray(b"\xFF" * 0x100000)
    memory[:0x8000] = image[:0x8000]
    memory[0x88000:] = image[0x8000:]
    return memory


def write_image(filename, image):
    """Export flash using 8 Mbit layout, CRLF and legacy DOS EOF trailer."""
    memory = to_cpu_image(image)

    with open(filename, "w", encoding="ascii", newline="") as output:
        output.write(_record(0, 2, b"\x00\x00"))
        upper = None
        for address in range(0, len(memory), 32):
            if address >> 16 != upper:
                upper = address >> 16
                output.write(_record(0, 4, upper.to_bytes(2, "big")))
            output.write(_record(address & 0xFFFF, 0, memory[address:address + 32]))
        output.write(_record(0, 1))
        output.write("\x1a")
