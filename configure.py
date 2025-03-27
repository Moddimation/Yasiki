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
    "-I lib",
    "-I include",
    "-I lib/SDK/Include",
    "-I lib/SDK/Include/stl",
    "-I lib/PowerPC_EABI_Support/MetroTRK/include",
    "-I lib/PowerPC_EABI_Support/MSL/MSL_C/MSL_Common/Include",
    "-I lib/PowerPC_EABI_Support/MSL/MSL_C/MSL_Common_Embedded",
    "-I lib/PowerPC_EABI_Support/MSL/MSL_C/MSL_Common_Embedded/Include",
    "-I lib/PowerPC_EABI_Support/MSL/MSL_C/PPC_EABI/Include",
    "-I lib/PowerPC_EABI_Support/Runtime/Include",
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
    "-i lib",
    "-i include",
    "-i lib/SDK/Include",
    "-i lib/SDK/Include/stl",
    "-i lib/PowerPC_EABI_Support/MetroTRK/include",
    "-i lib/PowerPC_EABI_Support/MSL/MSL_C/MSL_Common/Include",
    "-i lib/PowerPC_EABI_Support/MSL/MSL_C/MSL_Common_Embedded",
    "-i lib/PowerPC_EABI_Support/MSL/MSL_C/MSL_Common_Embedded/Include",
    "-i lib/PowerPC_EABI_Support/MSL/MSL_C/PPC_EABI/Include",
    "-i lib/PowerPC_EABI_Support/Runtime/Include",
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

# Odemu flags
cflags_odemu = [
    *cflags_base,
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


# Path prefixes for libraries
pathJSys = "JSystem"
pathSDK = "SDK/Src"
pathDolphin = f"{pathSDK}/dolphin"
pathMSL_Com = "PowerPC_EABI_Support/MSL/MSL_C/MSL_Common/Src"
pathMSL_Emb = "PowerPC_EABI_Support/MSL/MSL_C/MSL_Common_Embedded/Src"
pathMSL_Mat = "PowerPC_EABI_Support/MSL/MSL_C/MSL_Common_Embedded/Src/Math"
pathMSL_Ppc = "PowerPC_EABI_Support/MSL/MSL_C/PPC_EABI/Src"
pathMTK = "PowerPC_EABI_Support/MetroTRK/src"
pathRuntime = "PowerPC_EABI_Support/Runtime/Src"

# Helper function for Dolphin libraries
def DolphinLib(lib_name: str, objects: List[Object]) -> Dict[str, Any]:
    return {
        "lib": lib_name,
        "mw_version": "GC/1.2.5n",
        "cflags": cflags_sdk,
        "progress_category": "sdk",
        "src_dir": "lib",
        "objects": objects,
    }

# Helper function for JSystem libraries
def JSystemLib(lib_name: str, objects: List[Object]) -> Dict[str, Any]:
    return {
        "lib": lib_name,
        "mw_version": "GC/1.3.2",
        "cflags": cflags_jsys,
        "progress_category": "jsys",
        "src_dir": "lib",
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
        ]},
    JSystemLib("JAI", [
            #Object(NonMatching, f"{pathJSys}/JAI/JAIBasic.cpp"),
        ]),
    {
        "lib": "jaudio",
        "mw_version": "GC/1.2.5n",
        "cflags": cflags_jaudio,
        "progress_category": "jsys",
        "src_dir": "lib",
        "objects": [
            #Object(NonMatching, f"{pathJSys}/jaudio/aictrl.c"),
            #Object(NonMatching, f"{pathJSys}/jaudio/aramcall.c"),
            #Object(NonMatching, f"{pathJSys}/jaudio/audiomesg.c"),
            #Object(NonMatching, f"{pathJSys}/jaudio/audiothread.c"),
            #Object(NonMatching, f"{pathJSys}/jaudio/bankdrv.c"),
            #Object(NonMatching, f"{pathJSys}/jaudio/bankread.c"),
            #Object(NonMatching, f"{pathJSys}/jaudio/cmdqueue.c"),
            #Object(NonMatching, f"{pathJSys}/jaudio/connect.c"),
            #Object(NonMatching, f"{pathJSys}/jaudio/cpubuf.c"),
            #Object(NonMatching, f"{pathJSys}/jaudio/driverinterface.c"),
            #Object(NonMatching, f"{pathJSys}/jaudio/dsp_cardunlock.c"),
            #Object(NonMatching, f"{pathJSys}/jaudio/dspboot.c"),
            #Object(NonMatching, f"{pathJSys}/jaudio/dspbuf.c"),
            #Object(NonMatching, f"{pathJSys}/jaudio/dspdriver.c"),
            #Object(NonMatching, f"{pathJSys}/jaudio/dspinterface.c"),
            #Object(NonMatching, f"{pathJSys}/jaudio/dspproc.c"),
            #Object(NonMatching, f"{pathJSys}/jaudio/dummyprobe.c"),
            #Object(NonMatching, f"{pathJSys}/jaudio/dummyrom.c"),
            #Object(NonMatching, f"{pathJSys}/jaudio/dvdthread.c"),
            #Object(NonMatching, f"{pathJSys}/jaudio/fat.c"),
            #Object(NonMatching, f"{pathJSys}/jaudio/file_seq.c"),
            #Object(NonMatching, f"{pathJSys}/jaudio/foilter3d.c"),
            #Object(NonMatching, f"{pathJSys}/jaudio/fxinterface.c"),
            #Object(NonMatching, f"{pathJSys}/jaudio/heapctrl.c"),
            #Object(NonMatching, f"{pathJSys}/jaudio/hvqm_play.c"),
            #Object(NonMatching, f"{pathJSys}/jaudio/interface.c"),
            #Object(NonMatching, f"{pathJSys}/jaudio/ipldec.c"),
            #Object(NonMatching, f"{pathJSys}/jaudio/ja_calc.c"),
            #Object(NonMatching, f"{pathJSys}/jaudio/jammain_2.c"),
            #Object(NonMatching, f"{pathJSys}/jaudio/jamosc.c"),
            #Object(NonMatching, f"{pathJSys}/jaudio/memory.c"),
            #Object(NonMatching, f"{pathJSys}/jaudio/noteon.c"),
            #Object(NonMatching, f"{pathJSys}/jaudio/oneshot.c"),
            #Object(NonMatching, f"{pathJSys}/jaudio/playercall.c"),
            #Object(NonMatching, f"{pathJSys}/jaudio/random.c"),
            #Object(NonMatching, f"{pathJSys}/jaudio/sample.c"),
            #Object(NonMatching, f"{pathJSys}/jaudio/seqsetup.c"),
            #Object(NonMatching, f"{pathJSys}/jaudio/stackchecker.c"),
            #Object(NonMatching, f"{pathJSys}/jaudio/streamctrl.c"),
            #Object(NonMatching, f"{pathJSys}/jaudio/syncstream.c"),
            #Object(NonMatching, f"{pathJSys}/jaudio/verysimple.c"),
            #Object(NonMatching, f"{pathJSys}/jaudio/virtload.c"),
            #Object(NonMatching, f"{pathJSys}/jaudio/waveread.c"),
        ]},
    {
        "lib": "hvqm4dec",
        "mw_version": "GC/1.2.5n",
        "cflags": cflags_sdk,
        "progress_category": "sdk",
        "src_dir": "lib",
        "objects": [
            Object(NonMatching, "HVQM/hvqm4dec.c"),
        ]},
    {
        "lib": "Runtime.PPCEABI.H",
        "mw_version": "GC/1.2.5n",
        "cflags": cflags_runtime,
        "progress_category": "mtk",
        "src_dir": "lib",
        "objects": [
            #Object(NonMatching, f"{pathRuntime}/global_destructor_chain.c"),
            #Object(NonMatching, f"{pathRuntime}/__init_cpp_exceptions.cpp"),
        ]},
    {
        "lib": "MSL_C.PPCEABI.bare.H",
        "mw_version": "GC/1.2.5n",
        "cflags": cflags_runtime,
        "progress_category": "mtk",
        "src_dir": "lib",
        "objects": [
            #Object(NonMatching, ""),
        ]},
    {
        "lib": "OdemuExi2",
        "mw_version": "GC/1.2.5",
        "cflags": cflags_odemu,
        "progress_category": "sdk",
        "src_dir": "lib",
        "objects": [
            Object(MatchingFor("GLME01"), f"{pathSDK}/OdemuExi2Lib/DebuggerDriver.c"),
        ]},
    DolphinLib("amcstubs", [
            Object(Matching, f"{pathDolphin}/amcstubs/AmcExi2Stubs.c"),
        ]),
    DolphinLib("odenotstub", [
            Object(Matching, f"{pathDolphin}/odenotstub/odenotstub.c"),
        ]),
]

# Optional extra categories for progress tracking
# Adjust as desired for your project
config.progress_categories = [
    ProgressCategory("game", "Game Application"),
    ProgressCategory("jsys", "JSystem MiddleWare"),
    ProgressCategory("sdk", "Dolphin SDK"),
    ProgressCategory("mtk", "MTK Runtime"),
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
