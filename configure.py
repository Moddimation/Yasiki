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
from typing import Any, Dict, List, Tuple

from tools.project import (
    Object,
    ProgressCategory,
    ProjectConfig,
    calculate_progress,
    generate_build,
    is_windows,
)

# Game versions
DEFAULT_VERSION = 0 # GLMJ01
VERSIONS = [
    "GLMJ01",  # Japan Release
    "GLME01",  # US Release
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
    "-I decomp/App/lib",
    "-I decomp/App/*/include",
    "-I decompilation/SDK/include",
    "-I decompilation/lib/CodeWarrior/**/include",
    "-I decompilation/lib/CodeWarrior/**/Include",
    "-I decompilation/lib/CodeWarrior/**/INCLUDE",
    "-I decompilation/JSystem/**/include",
    f"-I build/{config.version}/include",
    f"--defsym version={version_num}",
]
config.ldflags = [
    "-fp hardware",
    "-nodefaults",
]
if args.debug:
    config.ldflags.append("-g")
if args.map:
    config.ldflags.append("-mapunused")

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
    '-pragma "cats off"',
    '-pragma "warn_notinlined off"',
    "-maxerrors 1",
    "-nosyspath",
    "-fp_contract on",
    "-str reuse",
    "-multibyte",
    "-i decomp/App/lib",
    "-i decomp/App/sources/*/include",
    "-i decomp/SDK/include",
    "-i decomp/CodeWarrior/**/include",
    "-i decomp/CodeWarrior/**/Include",
    "-i decomp/CodeWarrior/**/INCLUDE",
    "-i decomp/JSystem/**/include",
    f"-i build/{config.version}/include",
    f"-DVERSION_{config.version}",
]

# Debug flags
if args.debug:
    cflags_base.extend(["-sym on", "-DDEBUG=1"])
else:
    cflags_base.append("-DNDEBUG=1")

# JAudio flags
cflags_jaudio = [
    *cflags_base,
    "-proc 750",
    "-O4,s",
    "-inline off",
    "-common on",
    "-func_align 32",
    "-lang c++",
    "-DNDEBUG=1", 
    "-w off",
    "-use_lmw_stmw on",
    "-str reuse, readonly",
]

# JSystem library flags
cflags_jsys = [
    *cflags_base,
    "-O4,p",
    "-inline auto",
    "-RTTI on",
    
]

# Metrowerks library flags
cflags_runtime = [
    *cflags_base,
    "-proc 750",
    "-O4,p",
    "-use_lmw_stmw on",
    "-str reuse,pool,readonly",
    "-common off",
    "-inline deferred,auto",
    "-char signed",
    "-sdata 0",
    "-sdata2 0",
]
cflags_debugger = [
    *cflags_base,
    "-O4,p",
    "-pool off",
    "-str readonly",
    "-enum min",
    "-sdatathreshold 0",
]

# Game flags
cflags_game = [
    *cflags_base,
    "-O4,p",
    "-RTTI on",
    "-inline auto",
]

if config.version == "GLMJ01":
    cflags_odemu.extend(["-O3,p", "-proc 750", "-use_lmw_stmw off"])
else:
    cflags_odemu.extend(["-O4,p", "-proc gekko", "-inline all"])

# SDK flags
cflags_sdk = [
    *cflags_base,
    "-O4,p",
    "-inline auto",
]

config.linker_version = "GC/1.3.2"
linker_version_default = "GC/1.2.5"

# Helper function for SDK libraries
def SDKLib(lib_name: str, files: List[Tuple[bool, str]], conf: Dict[str,str]) -> Dict[str, Any]:
    objects = []
    for matching, filename in files:
        filepath = os.path.join(lib_name, filename)
        objects.append(Object(matching, filepath))

    return {
        "lib": lib_name,
        "mw_version": linker_version_default,
        "cflags": cflags_sdk,
        "progress_category": "sdk",
        "src_dir": "lib/SDK/src",
        "objects": objects,
        **conf,
    }

# Helper function for Dolphin libraries
def DolphinLib(lib_name: str, files: List[Tuple[bool, str]]) -> Dict[str, Any]:
    return SDKLib(lib_name, files, {
        "src_dir": f"decomp/SDK/src/dolphin",
    })

# Helper function for JSystem libraries
def JSystemLib(lib_name: str, sub_dir: str, files: List[Tuple[bool, str]], conf: Dict[str, str]=None) -> Dict[str, Any]:
    objects = []
    for matching, filename in files:
        objects.append(Object(matching, filename))

    return {
        "lib": lib_name,
        "mw_version": linker_version_default,
        "cflags": cflags_jsys,
        "progress_category": "jsys",
        "src_dir": f"decomp/JSystem/{sub_dir}/src",
        "objects": objects,
        **conf
    }

# Helper function for CodeWarrior runtime libraries
def CWLib(lib_name: str, sub_path: str, files: List[Tuple[bool, str]], conf: Dict[str, str]=None) -> Dict[str, Any]:
    objects = []
    for matching, filename in files:
        objects.append(Object(matching, filename))

    return {
        "lib": lib_name,
        "mw_version": linker_version_default,
        "cflags": cflags_cw,
        "progress_category": "cw",
        "src_dir": f"decomp/CodeWarrior/PowerPC_EABI_Support/{sub_path}",
        "objects": objects,
        **conf
    }

# Helper function for Game app libraries
def GameSource(lib_name: str, files: List[Tuple[bool, str]], conf: Dict[str, str]=None) -> Dict[str, Any]:
    objects = []
    for matching, filename in files:
        filepath = os.path.join(lib_name, "src", filename, ".cpp")
        objects.append(Object(matching, filepath))

    return {
        "lib": "game",
        "mw_version": config.linker_version,
        "cflags": cflags_game,
        "progress_category": "game",
        "src_dir": "sources",
        "objects": objects,
        **conf
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
            ##Object(NonMatching, "Unsorted/MoveObj.cpp"),
            ##Object(NonMatching, "Unsorted/Character.cpp"),
            #Object(Matching, "Sato/EnemyStrategy.cpp"),
            #Object(NonMatching, "Unsorted/IncludeStrategy.cpp"),
            #Object(NonMatching, "Sato/EnStrategy.cpp"),
            #Object(NonMatching, "Sato/EnemyTypicalStrategy.cpp"),
            ##Object(NonMatching, "Sotoike/AITurara.cpp"),
            #Object(NonMatching, "Unsorted/assignPlayerRank.cpp"),
            #Object(NonMatching, "Unsorted/getPlayerRank.cpp"),
            #Object(NonMatching, "Unsorted/checkTimeRange.cpp"),
            ##Object(NonMatching, "Unsorted/checkEventTimeBounds.cpp"),
            ##Object(NonMatching, "Unsorted/setAndExecCurrentEvent.cpp"),
        ]},
    GameSource("Kawano", [
        #(NonMatching, ""),
    ])
    GameSource("Iwamoto", [
        #(NonMatching, ""),
    ])
    GameSource("Nakamura", [
        #(NonMatching, ""),
    ])
    GameSource("Ajioka", [
        #(NonMatching, ""),
    ])
    GameSource("Game", [
        #(NonMatching, ""),
    ])
    GameSource("Koga", [
        (Matching, "CharacterEventObserver"),
    ])
    JSystemLib("JAudio", "JAudio/JAInterface", [
        #(NonMatching, "JAIBasic.cpp"),
    ]),
    JSystemLib("JAudio", "JAudio/Jaudio", [
        #(NonMatching, "aictrl.c"),
        #(NonMatching, "aramcall.c"),
        #(NonMatching, "audiomesg.c"),
        #(NonMatching, "audiothread.c"),
        #(NonMatching, "bankdrv.c"),
        #(NonMatching, "bankread.c"),
        #(NonMatching, "cmdqueue.c"),
        #(NonMatching, "connect.c"),
        #(NonMatching, "cpubuf.c"),
        #(NonMatching, "driverinterface.c"),
        #(NonMatching, "dsp_cardunlock.c"),
        #(NonMatching, "dspboot.c"),
        #(NonMatching, "dspbuf.c"),
        #(NonMatching, "dspdriver.c"),
        #(NonMatching, "dspinterface.c"),
        #(NonMatching, "dspproc.c"),
        #(NonMatching, "dummyprobe.c"),
        #(NonMatching, "dummyrom.c"),
        #(NonMatching, "dvdthread.c"),
        #(NonMatching, "fat.c"),
        #(NonMatching, "file_seq.c"),
        #(NonMatching, "foilter3d.c"),
        #(NonMatching, "fxinterface.c"),
        #(NonMatching, "heapctrl.c"),
        #(NonMatching, "hvqm_play.c"),
        #(NonMatching, "interface.c"),
        #(NonMatching, "ipldec.c"),
        #(NonMatching, "ja_calc.c"),
        #(NonMatching, "jammain_2.c"),
        #(NonMatching, "jamosc.c"),
        #(NonMatching, "memory.c"),
        #(NonMatching, "noteon.c"),
        #(NonMatching, "oneshot.c"),
        #(NonMatching, "playercall.c"),
        #(NonMatching, "random.c"),
        #(NonMatching, "sample.c"),
        #(NonMatching, "seqsetup.c"),
        #(NonMatching, "stackchecker.c"),
        #(NonMatching, "streamctrl.c"),
        #(NonMatching, "syncstream.c"),
        #(NonMatching, "verysimple.c"),
        #(NonMatching, "virtload.c"),
        #(NonMatching, "waveread.c"),
    ]{
        "cflags": cflags_jaudio
    }),
    JSystemLib("HVQM", "JAudio/Jaudio/lib/hvqm4dec/src", [
        (NonMatching, "hvqm4dec.c")
    ],{
        "src_dir": "lib/HVQM/src"
    }),
    CWLib("Runtime.PPCEABI.H", "Runtime/Src", [
        #(NonMatching, "global_destructor_chain.c"),
        #(NonMatching, "__init_cpp_exceptions.cpp"),
    ])
    CWLib("MSL_C.PPCEABI.bare.H", "MSL/MSL_C/MSL_Common/Src", [
        #(NonMatching, ""),
    ])
    CWLib("MSL_C.PPCEABI.bare.H", "MSL/MSL_C/MSL_Common_Embedded/Src", [
        #(NonMatching, ""),
    ])
    CWLib("MSL_C.PPCEABI.bare.H", "MSL/MSL_C/MSL_Common_Embedded/Math", [
        #(NonMatching, ""),
    ])
    CWLib("MSL_C.PPCEABI.bare.H", "MSL/MSL_C/PPC_EABI/SRC", [
        #(NonMatching, ""),
    ])
    CWLib("MSL_C.PPCEABI.bare.H", "MetroTRK/src", [
        #(NonMatching, ""),
    ])
    DolphinLib("amcstubs", [
        (Matching, "AmcExi2Stubs.c"),
    ]),
    DolphinLib("OdemuExi2Lib", [
        (MatchingFor("GLME01"), "DebuggerDriver.c")
    ],{
        "cflags"; cflags_base
    }),
    DolphinLib("odenotstub", [
        (Matching, "odenotstub.c"),
    ]),
]

# Optional extra categories for progress tracking
# Adjust as desired for your project
config.progress_categories = [
    ProgressCategory("game", "Game App"),
    ProgressCategory("jsys", "JSystem"),
    ProgressCategory("sdk", "DolphinSDK"),
    ProgressCategory("cw", "CW Runtime"),
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
