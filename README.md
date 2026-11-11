# opengk-custom-firmware

Custom firmware for the Siemens **SIMK43** engine ECU (Hyundai/Kia, Infineon C167CR),
software **OPENGK01**, written in C166 assembly (Keil A166 syntax) and built with
[openc166](https://github.com/dante383/openc166).

The `.a66` files under `firmware/` are the source. Edit them directly; the build
produces a complete 512 KB flash image with all checksums fixed, and an ASAP2 (A2L)
description of it for INCA/CANape/CCP tools. The 1 MiB flash image and Intel HEX files
are padded for the CPU address space.

## Quick start

```bash
pip install -r requirements.txt          # openc166, pinned
make                                     # -> build/out/opengk01.bin + .a2l + .hex
```

| Command | What it does |
|---|---|
| `make` / `make build` | assemble and link everything, fix checksums, write the image |
| `make clean` | remove `build/out/` |
| `python3 tools/build.py -v` | build, printing every assembler warning |
| `python3 tools/checksum.py <image> [--fix]` | check (or fix) the checksums of any image |
| `python3 tools/gen_a2l.py [-o file]` | regenerate only the A2L |

## Releases

`.github/workflows/build.yml` builds on pushes to `main`, branches matching
`test-*[0-9][0-9]-u[0-9]*` (for example `test-oct26-u1`), and every pull
request: it installs the pinned openc166 from `requirements.txt`, runs `make`,
verifies the checksums and uploads `opengk01-<commit>.bin` / `.a2l`,
`opengk01-<commit>_8mbit.bin` / `.hex` plus `SHA256SUMS` as a workflow artifact.

Successful branch pushes increment the patch number of the highest `vMAJOR.MINOR.PATCH`
tag and publish a release for the built commit. For example, `v0.1.0` becomes
`v0.1.1`, titled `OPENGK01 v0.1.1`. Both main and test branches use this sequence.
Without an existing version tag, the first release is `v0.0.1`.

Pushing an explicit `v*` tag publishes that tag without incrementing it.
Pull requests and manual runs build artifacts without publishing releases.

The build is deterministic: the same commit produces the same image and A2L
locally and in CI.

## Layout

The top level uses Siemens' section names:

| Name | Meaning | Here |
|---|---|---|
| **bsw** | boot software | `firmware/bsw/` |
| **asw** | application software | `firmware/asw/` |
| **rsw** | reprogramming software | not present |
| **cal** | calibration | `firmware/cal/` |

```
firmware/
  bsw/
    boot_low.a66      0x00000  interrupt/trap vector table + runtime helpers
    boot_info.a66     0x03E00  IDs, Boot checksum table
    bootloader.a66    0x88000  seg-8 bootloader
  asw/                0xA0000  application, one file per module
    ivvt/ knk/ lam/ maf/ iga/ ...   engine functions, a directory per subsystem
    comm/                           KWP2000, CCP, OBD
    sys/                            OS, interrupt handlers, drivers
    rt/                             runtime library (map interpolation, saturating math)
    *.a66                           subsystems with a single module
    asw_header.a66                  ASW ID block + Program checksum table
  cal/
    opengk01.dat      0x90000  calibration image, 64 KB
    cal.inc                    every calibration label + description + ;@a2l annotation
  custom/                      new modules (linked with asw)
  inc/
    REG167.INC                 C167 SFRs (from openc166, MIT)
    zone_syms.inc              shared RAM/SFR/bit names for asw (+ ;@a2l measurements)
    a2l.inc                    A2L project data, memory segments, CCP, conversions
a2l/
  ccp.aml                      CCP A2ML interface description (ASAM CCP 2.1)
tools/
  build.py  checksum.py
  gen_a2l.py                   A2L generator (reads the ;@a2l annotations)
build/                         outputs (not committed)
```

The application is split along the original source-module boundaries (recovered from
how the linker laid the code out). Many file names are still placeholders
(`ivvt_cam_2.a66`, `comm_flash_7.a66`, ...); rename files freely, the build globs
`firmware/asw/**/*.a66`.

### Flash map

512 KB flash, mirrored across the 1 MB address space: file offset = `address & 0x7FFFF`.

| Address | File | Content | Source |
|---|---|---|---|
| 0x00000-0x02085 | 0x00000 | vectors, runtime helpers | `bsw/boot_low.a66` |
| 0x03E00-0x03FFF | 0x03E00 | boot info, Boot checksum table | `bsw/boot_info.a66` |
| 0x88000-0x8FFFF | 0x08000 | bootloader | `bsw/bootloader.a66` |
| 0x90000-0x9FFFF | 0x10000 | calibration | `cal/opengk01.dat` |
| 0xA0000-0xE5E0B | 0x20000 | application | `asw/**` |
| 0xE5E0C-0xFE1FF | 0x65E0C | **erased (0xFF), about 97 KB free** | `custom/**` lands here |
| 0xFE200-0xFFF33 | 0x7E200 | runtime library | `asw/rt/` |

There is also about 27 KB erased at the end of calibration (0x996CE-0x9FFFF).

## How the build works

`tools/build.py` builds three link units separately:

1. **bsw**: each `firmware/bsw/*.a66` is assembled on its own.
2. **asw**: every `firmware/asw/**/*.a66` plus `firmware/custom/**/*.a66` is linked
   in one openc166 run. `EXTERN` names resolve to `PUBLIC` ones across files, as with
   Keil's L166. Sections without `AT` are placed in the free flash from 0xE5E0C on.
3. **cal**: `opengk01.dat` is copied to 0x90000.

Bytes nobody writes stay 0xFF. The build fails if two units write the same byte, or
if two sections inside a unit overlap (openc166 warning OC1, which is how a module
that grew past its slot shows up). Then the three region checksums are recomputed
(`tools/checksum.py`):

| Region | Table | CRC init | Zones |
|---|---|---|---|
| Boot | 0x3EEC | 0x3FE4 | 0x00000-0x02085, 0x88000-0x8F467 |
| Calibration | 0x97EE0 | 0x9000C | 0x90000-0x96BE9, 0x98000-0x996CD |
| Program | 0xA0010 | 0xA0052 | 0xA0210-0xE5E0B, 0xFE200-0xFFF33 (6 zones) |

The CRC is CRC-16 with polynomial 0x8005, reflected, and no final XOR. Each zone
continues from the previous zone's CRC. The stored value is little-endian. This is the
same scheme as gkflasher's "4mbit (FL2)". The CRC init values sit inside the ID
strings, so changing an ID changes the checksum too; the build takes care of it.

openc166 emits some warnings the inherited code triggers (for example `RETS`/`RETI`
outside a `PROC`, or SFR accesses around `EXTR`). The build only counts them.

## A2L

`make` also writes `build/out/opengk01.a2l` (ASAP2 1.61). It is generated from
the code: every A2L object is a `;@a2l` annotation on the symbol it describes, and
its address is that symbol's value as the assembler computes it.

```asm
;@a2l MAP UBYTE conv=cv_degcrk_6 fmt=5.1 x=ldpm_n_32__iga_temp y=ldpm_maf_hb__iga_temp "Basis for temperatur correction of IGA_BAS"
ip_iga_bas_temp__n_32__maf_hb   EQU  095ADDH

;@a2l AXIS UBYTE n=8 conv=cv_rpm input=n_32 "axis: N_32"
ldpm_n_32__iga_temp             EQU  090C31H

;@a2l MEASUREMENT UBYTE conv=cv_rpm fmt=4.0
n_32                            EQU  0C24BH
```

| Annotation | Becomes | Keys |
|---|---|---|
| `VALUE` / `CURVE` / `MAP` *dtype* | `CHARACTERISTIC` | `conv=`, `fmt=`, `x=` / `y=` (axis symbols) |
| `AXIS` *dtype* | `AXIS_PTS`, `[count][points]` | `n=` points, `conv=`, `input=` (measurement) |
| `MEASUREMENT` *dtype* | `MEASUREMENT` | `conv=`, `fmt=`, `mask=` (bit field) |

*dtype* is `UBYTE SBYTE UWORD SWORD ULONG SLONG`; `fmt=5.1` means `"%5.1"`; a quoted
string at the end is the description; `name=` sets the A2L name when the code can't
use it (`n_C93C` is `n` in the A2L, because `N` is a PSW flag in A166). Since `%` starts
a macro call in A166 even inside comments, annotations write it as `&pct;`.

`firmware/inc/a2l.inc` holds what isn't attached to a symbol: project and module
names, EPK, memory segments, the CCP parameters and the conversions
(`;@a2l CONV cv_rpm LINEAR 32 0 "rpm"`, `VTAB`, `VTAB_RANGE`, `TAB`). Scales are
exact (`260/17` is allowed) and become exact rational `COEFFS`.

What's annotated today: 2,160 calibration objects, 474 axes and 2,133 RAM variables
(500 of them bit fields), all with Siemens' names, types, conversions, units and
formats; 732 groups follow Siemens' function sections. Maps are `FNC_VALUES
COLUMN_DIR` with rows along the first DAMOS input (`ip_<map>__<first>__<second>`).
Byte axes start with a count byte, word axes with a count word. 11 axes have no known
conversion and show raw values (their annotation says so).

**New parameters and variables:** annotate them where you define them, in any
module. The build passes the link's symbol table to the generator, so a label in a
relocatable section works:

```asm
CUSTOM_CAL SECTION CODE
;@a2l VALUE UWORD conv=cv_none_4 fmt=6.3 "My gain"
my_gain:    DW 0100H
CUSTOM_CAL ENDS
```

**CCP:** station 0x01, CRO 0x6A0, DTO 0x6A1, 500 kbit/s (from the CAN message-object
table at 0xA2378, which also has DAQ IDs 0x6A2-0x6A4). DAQ lists, checksum and
seed/key aren't described yet, so INCA measures by polling. **EPK:**
`OPENGK01OG0001` at 0x90000.

## Writing code

Each asw module looks like this:

```asm
$MOD167
$SEGMENTED
$INCLUDE (REG167.INC)
$INCLUDE (zone_syms.inc)
PUBLIC  Calc_IVVT_HPWM_Base, Ctl_IVVT_OCV_PWM, ...    ; its functions
EXTERN  Get_IP_Byte_2D_Table:NEAR, Sat_Add_S16:NEAR   ; what it uses from other modules
; calibration labels used here (documented in cal/cal.inc)
c_t_sum_if_min_ivvt                  EQU  09072CH
S_AF1FE SECTION CODE AT 0AF1FEH                       ; pinned at its address
```

New modules go in `firmware/custom/`. A section without `AT` lands in the free flash:

```asm
$MOD167
$SEGMENTED
$INCLUDE (REG167.INC)
$INCLUDE (zone_syms.inc)          ; RAM variables by name: state_ivvt, ...
$INCLUDE (cal.inc)                ; calibration labels: c_*, ip_*, ...
PUBLIC  My_Feature
EXTERN  Calc_IVVT_Delay:NEAR

MY_CODE SECTION CODE              ; no AT: goes into free flash
My_Feature:
        CALLS   SEG Calc_IVVT_Delay, SOF Calc_IVVT_Delay
        RETS
MY_CODE ENDS
        END
```

### Rules while modules are pinned

Every application module is still pinned at its address (`SECTION ... AT`), and the
code still contains raw addresses (jump tables, pointer tables, some immediates). So:

- **Don't change the size of existing code** in the middle of a module: everything
  after the edit would move, and raw addresses pointing at it would go stale. It
  assembles fine and crashes on the car.
- **To change behaviour, branch out:** replace an instruction with a `CALLS`/`JMPS`
  to new code in `custom/`, padding with `NOP`s to keep the size, or rewrite a routine
  in place with the same or a smaller size.
- **A module can't grow past its slot.** If it does, the build fails with OC1.
- **`#DATA16`** forces the 4-byte immediate form where a 2-byte one would fit. The
  inherited code uses it everywhere to keep its size, and so every address,
  unchanged. Leave it alone in old code; in new code it isn't needed.

Other things to know:

- **Calibration and other paged data** is reached through a data page pointer (DPP).
  `cal.inc` holds physical addresses, and code names the page register explicitly:
  `MOVBZ R5, DPP0:c_n_di_cam_ctl_end_psn_ivvt`. In most of the application
  DPP0 = page 24h (0x90000, calibration), but some functions run with DPP0 = page 3
  (internal RAM). Check the DPP setup of the code you hook into.
- **Maps and axes** are passed to the runtime (`Get_IP_*`) as a page:offset pair,
  `R12` = offset, `R13` = page:
  ```asm
          MOV R12,#DATA16 POF ip_maf_tps_diag_x   ; axis object
          MOV R13,#DATA16 PAG ip_maf_tps_diag_x
          MOVBZ R14,n_32                          ; axis input
          CALLS 00FH,Get_IP_Byte_Y_Axis
          MOV R12,#DATA16 POF ip_maf_tps_diag     ; curve / map data
          MOV R13,#DATA16 PAG ip_maf_tps_diag
          CALLS 00FH,Get_IP_Word_2D_Table
  ```
  An axis object is `[length N][N breakpoints]`. Axis labels are `<map>_x` / `<map>_y`
  when one map uses the axis (x/y in DAMOS input order `ip_<map>__<first>__<second>`),
  `ax_<DAMOS name>` or `ax_<input>_<addr>` when shared. `cal.inc` lists which maps use
  each axis. The routine named `Get_IP_*_Y_Axis` feeds the *first* map input (and
  every curve); `*_X_Axis` feeds the second.
- **Identification strings** (cal header 0x90000, ASW block 0xA004E, boot info 0x3F20-0x3FFF)
  are free text except one rule: the 6 characters at 0x90008 (cal) must equal those at
  0xA0056 (ASW). `Calc_ECU_Diag_SF` compares them and sets an ECU error (DTC/MIL) on a
  mismatch. Both are `OG0001` now. The CRC init values sit inside these strings, so the
  build's checksum fix takes care of any change.
- **Names are case-insensitive** in A166. A section named `MY_FEATURE` clashes with
  a label `My_Feature`.
- **`%` starts an MPL macro call**, even inside a comment. Write `pct`.
- **Use `CALLS`/`JMPS` with `SEG x, SOF x`** to reach code in another 64 KB segment.
  `CALLA`/`JMPA` only work within the same segment.
- **Checksums:** the free area is outside the Program checksum zones, so code placed
  there isn't covered by the ECU's self-test, and the build prints a note. Covering
  it means extending the zone table at 0xA0010 (in `asw/asw_header.a66`).

## Roadmap

- **Fully symbolic references.** Still numeric: paged operands without a resolved
  target, unnamed RAM, struct bases, `#` immediates that are really addresses, and
  the jump and pointer tables (raw `DB`). All of these must become labels before code
  can move.
- **Relocatable modules.** Then drop `AT` (and `#DATA16`) so code can grow in place,
  with no branch-out patches.
- Extend the Program checksum zones automatically to cover custom code.
- Custom calibration parameters in the free calibration space.
- CCP DAQ lists (event channels, ODT sizes), seed/key and checksum in the A2L.
- Choose real file names; KWP/comm is probably split too finely (43 modules).