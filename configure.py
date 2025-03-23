#!/usr/bin/env python3

###
# Generates build files for the project.
# This file also includes the project configuration,
# such as compiler flags and the object matching status.
#
# Usage:
#   python3 configure.py
#   ninja
#
# Append --help to see available options.
###

import argparse
import sys
from pathlib import Path
from typing import Any, Dict, List

from tools.project import (
    Object,
    ProgressCategory,
    ProjectConfig,
    calculate_progress,
    generate_build,
    is_windows,
)

# Game versions
DEFAULT_VERSION = 0
VERSIONS = [
    "GLME01",  # 0
    "GLMJ01",  # 1
]

parser = argparse.ArgumentParser()
parser.add_argument(
    "mode",
    choices=["configure", "progress"],
    default="configure",
    help="script mode (default: configure)",
    nargs="?",
)
parser.add_argument(
    "-v",
    "--version",
    choices=VERSIONS,
    type=str.upper,
    default=VERSIONS[DEFAULT_VERSION],
    help="version to build",
)
parser.add_argument(
    "--build-dir",
    metavar="DIR",
    type=Path,
    default=Path("build"),
    help="base build directory (default: build)",
)
parser.add_argument(
    "--binutils",
    metavar="BINARY",
    type=Path,
    help="path to binutils (optional)",
)
parser.add_argument(
    "--compilers",
    metavar="DIR",
    type=Path,
    help="path to compilers (optional)",
)
parser.add_argument(
    "--map",
    action="store_true",
    help="generate map file(s)",
)
parser.add_argument(
    "--debug",
    action="store_true",
    help="build with debug info (non-matching)",
)
if not is_windows():
    parser.add_argument(
        "--wrapper",
        metavar="BINARY",
        type=Path,
        help="path to wibo or wine (optional)",
    )
parser.add_argument(
    "--dtk",
    metavar="BINARY | DIR",
    type=Path,
    help="path to decomp-toolkit binary or source (optional)",
)
parser.add_argument(
    "--objdiff",
    metavar="BINARY | DIR",
    type=Path,
    help="path to objdiff-cli binary or source (optional)",
)
parser.add_argument(
    "--sjiswrap",
    metavar="EXE",
    type=Path,
    help="path to sjiswrap.exe (optional)",
)
parser.add_argument(
    "--verbose",
    action="store_true",
    help="print verbose output",
)
parser.add_argument(
    "--non-matching",
    dest="non_matching",
    action="store_true",
    help="builds equivalent (but non-matching) or modded objects",
)
parser.add_argument(
    "--no-progress",
    dest="progress",
    action="store_false",
    help="disable progress calculation",
)
args = parser.parse_args()

config = ProjectConfig()
config.version = str(args.version)
version_num = VERSIONS.index(config.version)

# Apply arguments
config.build_dir = args.build_dir
config.dtk_path = args.dtk
config.objdiff_path = args.objdiff
config.binutils_path = args.binutils
config.compilers_path = args.compilers
config.generate_map = args.map
config.non_matching = args.non_matching
config.sjiswrap_path = args.sjiswrap
config.progress = args.progress
if not is_windows():
    config.wrapper = args.wrapper
# Don't build asm unless we're --non-matching
if not config.non_matching:
    config.asm_dir = None

# Tool versions
config.binutils_tag = "2.42-1"
config.compilers_tag = "20240706"
config.dtk_tag = "v1.3.0"
config.objdiff_tag = "v2.4.0"
config.sjiswrap_tag = "v1.2.0"
config.wibo_tag = "0.6.11"

# Project
config.config_path = Path("config") / config.version / "config.yml"
config.check_sha_path = Path("config") / config.version / "build.sha1"
config.asflags = [
    "-mgekko",
    "--strip-local-absolute",
    "-I include",
    "-I lib",
    "-I lib/SDK/include",
    "-I lib/PowerPC_EABI_Support/MSL/MSL_C",
    "-I lib/PowerPC_EABI_Support/Runtime/Include",
    "-I lib/PowerPC_EABI_Tools",
    f"-I build/{config.version}/include",
    f"--defsym version={version_num}",
]
config.ldflags = [
    "-fp hardware",
    "-nodefaults",
]
if args.debug:
    config.ldflags.append("-g")  # Or -gdwarf-2 for Wii linkers
if args.map:
    config.ldflags.append("-mapunused")
    # config.ldflags.append("-listclosure") # For Wii linkers

# Use for any additional files that should cause a re-configure when modified
config.reconfig_deps = []

# Optional numeric ID for decomp.me preset
# Can be overridden in libraries or objects
config.scratch_preset_id = None

# Base flags, common to most GC/Wii games.
# Generally leave untouched, with overrides added below.
cflags_base = [
    "-nodefaults",
    "-proc gekko",
    "-align powerpc",
    "-enum int",
    "-fp hardware",
    "-Cpp_exceptions off",
    # "-W all",
    "-O4,p",
    "-inline auto",
    '-pragma "cats off"',
    '-pragma "warn_notinlined off"',
    "-maxerrors 1",
    "-nosyspath",
    "-RTTI off",
    "-fp_contract on",
    "-str reuse",
    "-multibyte",  # For Wii compilers, replace with `-enc SJIS`
    "-i include",
    "-i lib",
    "-i lib/SDK/include",
    "-i lib/PowerPC_EABI_Support/MSL/MSL_C",
    "-i lib/PowerPC_EABI_Support/Runtime/Include",
    "-i lib/PowerPC_EABI_Tools",
    f"-i build/{config.version}/include",
    f"-DBUILD_VERSION={version_num}",
    f"-DVERSION_{version_num}",
]

# Debug flags
if args.debug:
    # Or -sym dwarf-2 for Wii compilers
    cflags_base.extend(["-sym on", "-DDEBUG=1"])
else:
    cflags_base.append("-DNDEBUG=1")

# JAudio library flags
cflags_framework = [
    *cflags_base,
    
]

# jaudio library flags
cflags_audio = [
    *cflags_base,
    "-proc 750",
    "-align powerpc",
    "-O4,s",
    "-inline off",
    "-common on",
    "-func_align 32",
    "-lang c++",
    "-DNDEBUG=1",
    "-w off",
    "-use_lmw_stmw on",
]

# JSystem library flags
cflags_framework = [
    *cflags_base,
    
]

# Metrowerks library flags
cflags_runtime = [
    *cflags_base,
    "-use_lmw_stmw on",
    "-str reuse,pool,readonly",
    "-gccinc",
    "-common off",
    "-inline auto",
]

# Game flags
cflags_game = [
    *cflags_base,
    "-RTTI on",
]

# REL flags
cflags_rel = [
    *cflags_base,
    "-sdata 0",
    "-sdata2 0",
]

config.linker_version = "GC/1.3.2"


# Helper function for Dolphin libraries
def DolphinLib(lib_name: str, objects: List[Object]) -> Dict[str, Any]:
    return {
        "lib": lib_name,
        "mw_version": "GC/1.2.5n",
        "cflags": cflags_base,
        "progress_category": "sdk",
        "src_dir": "lib",
        "objects": objects,
    }

# Helper function for Dolphin libraries
def JSystemLib(lib_name: str, objects, progress_category="jsystem"):
    return {
        "lib": lib_name,
        "mw_version": "GC/1.3.2",
        "cflags": cflags_framework,
        "progress_category": "sdk",
        "src_dir": "lib",
        "objects": objects,
    }


# Helper function for REL script objects
def Rel(lib_name: str, objects: List[Object]) -> Dict[str, Any]:
    return {
        "lib": lib_name,
        "mw_version": "GC/1.3.2",
        "cflags": cflags_rel,
        "progress_category": "game",
        "objects": objects,
    }


Matching = True                   # Object matches and should be linked
NonMatching = False               # Object does not match and should not be linked
Equivalent = config.non_matching  # Object should be linked when configured with --non-matching


# Object is only matching for specific versions
def MatchingFor(*versions):
    return config.version in versions


config.warn_missing_config = True
config.warn_missing_source = False
config.libs = [
    {
        "lib": "game",
        "mw_version": config.linker_version,
        "cflags": cflags_game,
        "progress_category": "game",
        "src_dir": "sources",
        "objects": [
            #Object(NonMatching, "Unsorted/MoveObj.cpp"),
            #Object(NonMatching, "Unsorted/Character.cpp"),
            Object(Matching, "Sato/EnemyStrategy.cpp"),
            Object(NonMatching, "Unsorted/IncludeStrategy.cpp"),
            Object(NonMatching, "Sato/EnStrategy.cpp"),
            Object(NonMatching, "Sato/EnemyTypicalStrategy.cpp"),
            #Object(NonMatching, "Sotoike/AITurara.cpp"),
            Object(Matching, "Koga/CharacterEventObserver.cpp"),
            Object(NonMatching, "Unsorted/assignPlayerRank.cpp"),
            Object(NonMatching, "Unsorted/getPlayerRank.cpp"),
            Object(NonMatching, "Unsorted/checkTimeRange.cpp"),
            #Object(NonMatching, "Unsorted/checkEventTimeBounds.cpp"),
            #Object(NonMatching, "Unsorted/setAndExecCurrentEvent.cpp"),
        ],
    },
    {
        "lib": "JAudio",
        "mw_version": config.linker_version,
        "cflags": cflags_audio,
        "progress_category": "jsys",
        "src_dir": "lib",
        "objects": [
            #Object(NonMatching, "JSystem/JAI/JAIBasic.cpp"),
        ]
    },
    {
        "lib": "jaudio",
        "mw_version": config.linker_version,
        "cflags": cflags_audio,
        "progress_category": "jsys",
        "src_dir": "lib",
        "objects": [
            #Object(NonMatching, "JSystem/jaudio/aictrl.c"),
            #Object(NonMatching, "JSystem/jaudio/aramcall.c"),
            #Object(NonMatching, "JSystem/jaudio/audiomesg.c"),
            #Object(NonMatching, "JSystem/jaudio/audiothread.c"),
            #Object(NonMatching, "JSystem/jaudio/bankdrv.c"),
            #Object(NonMatching, "JSystem/jaudio/bankread.c"),
            #Object(NonMatching, "JSystem/jaudio/cmdqueue.c"),
            #Object(NonMatching, "JSystem/jaudio/connect.c"),
            #Object(NonMatching, "JSystem/jaudio/cpubuf.c"),
            #Object(NonMatching, "JSystem/jaudio/driverinterface.c"),
            #Object(NonMatching, "JSystem/jaudio/dsp_cardunlock.c"),
            #Object(NonMatching, "JSystem/jaudio/dspboot.c"),
            #Object(NonMatching, "JSystem/jaudio/dspbuf.c"),
            #Object(NonMatching, "JSystem/jaudio/dspdriver.c"),
            #Object(NonMatching, "JSystem/jaudio/dspinterface.c"),
            #Object(NonMatching, "JSystem/jaudio/dspproc.c"),
            #Object(NonMatching, "JSystem/jaudio/dummyprobe.c"),
            #Object(NonMatching, "JSystem/jaudio/dummyrom.c"),
            #Object(NonMatching, "JSystem/jaudio/dvdthread.c"),
            #Object(NonMatching, "JSystem/jaudio/fat.c"),
            #Object(NonMatching, "JSystem/jaudio/file_seq.c"),
            #Object(NonMatching, "JSystem/jaudio/foilter3d.c"),
            #Object(NonMatching, "JSystem/jaudio/fxinterface.c"),
            #Object(NonMatching, "JSystem/jaudio/heapctrl.c"),
            #Object(NonMatching, "JSystem/jaudio/hvqm_play.c"),
            #Object(NonMatching, "JSystem/jaudio/interface.c"),
            #Object(NonMatching, "JSystem/jaudio/ipldec.c"),
            #Object(NonMatching, "JSystem/jaudio/ja_calc.c"),
            #Object(NonMatching, "JSystem/jaudio/jammain_2.c"),
            #Object(NonMatching, "JSystem/jaudio/jamosc.c"),
            #Object(NonMatching, "JSystem/jaudio/memory.c"),
            #Object(NonMatching, "JSystem/jaudio/noteon.c"),
            #Object(NonMatching, "JSystem/jaudio/oneshot.c"),
            #Object(NonMatching, "JSystem/jaudio/playercall.c"),
            #Object(NonMatching, "JSystem/jaudio/random.c"),
            #Object(NonMatching, "JSystem/jaudio/sample.c"),
            #Object(NonMatching, "JSystem/jaudio/seqsetup.c"),
            #Object(NonMatching, "JSystem/jaudio/stackchecker.c"),
            #Object(NonMatching, "JSystem/jaudio/streamctrl.c"),
            #Object(NonMatching, "JSystem/jaudio/syncstream.c"),
            #Object(NonMatching, "JSystem/jaudio/verysimple.c"),
            #Object(NonMatching, "JSystem/jaudio/virtload.c"),
            #Object(NonMatching, "JSystem/jaudio/waveread.c"),
        ],
    },
    {
        "lib": "hvqm4dec",
        "mw_version": config.linker_version,
        "cflags": cflags_base,
        "progress_category": "jsys",
        "src_dir": "lib",
        "objects": [
            Object(NonMatching, "hvqm4dec/hvqm4dec.c"),
        ],
    },
    {
        "lib": "Runtime.PPCEABI.H",
        "mw_version": config.linker_version,
        "cflags": cflags_runtime,
        "progress_category": "sdk",  # str | List[str]
        "src_dir": "lib",
        "objects": [
            #Object(NonMatching, "Runtime.PPCEABI.H/global_destructor_chain.c"),
            #Object(NonMatching, "Runtime.PPCEABI.H/__init_cpp_exceptions.cpp"),
        ],
    },
    {
        "lib": "MSL_C.PPCEABI.bare.H",
        "mw_version": config.linker_version,
        "cflags": cflags_runtime,
        "progress_category": "sdk",  # str | List[str]
        "src_dir": "lib",
        "objects": [
            #Object(NonMatching, ""),
        ],
    },
    DolphinLib("OdemuExi2", [
            Object(NonMatching, "OdemuExi2/DebuggerDriver.c", cflags=[*cflags_base, "-inline auto,deferred"]),
        ]),
    DolphinLib("amcstubs", [
            Object(NonMatching, "dolphin/amcstubs/AmcExi2Stubs.c"),
        ]),
    DolphinLib("odenotstub", [
            Object(Matching, "dolphin/odenotstub/odenotstub.c"),
        ]),
]

# Optional extra categories for progress tracking
# Adjust as desired for your project
config.progress_categories = [
    ProgressCategory("game", "Game"),
    ProgressCategory("jsys", "JSystem"),
    ProgressCategory("sdk", "SDK"),
]
config.progress_each_module = args.verbose

if args.mode == "configure":
    # Write build.ninja and objdiff.json
    generate_build(config)
elif args.mode == "progress":
    # Print progress and write progress.json
    calculate_progress(config)
else:
    sys.exit("Unknown mode: " + args.mode)
