Luigi's Mansion                 
[![Discord Badge]][discord]
=============
<!-- [![Build Status]][actions] [![Progress]][progress site]  -->

<!-- [Build Status]: https://github.com/zeldaret/tww/actions/workflows/build.yml/badge.svg
[actions]: https://github.com/zeldaret/tww/actions/workflows/build.yml
[Progress]: https://decomp.dev/zeldaret/tww.svg?mode=shield&measure=code&label=Code&category=all
[progress site]: https://zeldaret.github.io/tww/ -->
[Discord Badge]: https://img.shields.io/discord/688807550715560050?color=%237289DA&logo=discord&logoColor=%23FFFFFF
[discord]: https://discord.gg/hKx3FJJgrV

A work-in-progress decompilation of Luigi's Mansion (GameCube, 2001).

Supported versions (active):
- `GLMJ01`: Japan (Rev 0)

Supported versions (to be worked on):
- `GLME01`: USA (Rev 0)
- `GLME01_1`: USA Demo (October 2001)
- `GLMP01`: Europe (Rev 0)
- `GLMP01_1`: Europe (Rev 1)
- `GLMP01_2`: Europe (March 2002)

> [!IMPORTANT]
> Reminder: **this will not produce a playable game.** 
> This project will not allow you to play the game if you don't provide your own copy.

Information
===========
I heavily restructured the source layout of the original repo from [Sage-of-Mirrors](https://github.com/Sage-of-Mirrors/zmansion). This was not forked directly from it, but from [CoNesTra](https://github.com/CoNesTra/zmansion), as he put in effort to add Luigi's Mansion 3DS information to the repo and updated the [DTK](https://github.com/encounter/decomp-toolkit) tools.
I did reset the splits and the symbol list, so the % were brought back to 0.
### Current State of Progress
I am currently trying to fill out the library symbols in the Ghidra repository.
### Code Structure
The code categories are put inside of the 'decomp' folder in root, as follows:  
 `/decomp/<category>/...`
 
Sublibraries in a library rely on the modular scheme used for libraries and for the game, such as:  
 `/decomp/JSystem/System/JKernel/ src/include`,  
 `/decomp/JSystem/System/JSupport/ src/include`,  
 `/decomp/JSystem/JAudio/JAInterface/ src/include`,  
 `/decomp/App/Kawamoto/. src/include`,  
 `/decomp/App/Sotoike/. src/include`,  
 `/decomp/App/Koga/. src/include`,
and so on.

My goal is to stay as original as possible, while still making it possible to work with for the decompiling efforts.
### Configuration Structure
I put every library in configure.py in a helper function according to its category, for a better interface.
### Documents
I’ve also included some small private notes in `/docs/*.txt`, which may contain useful information (if needed).
### Misc
- You can put personal stuff in /private/, it is ignored with github.
- I prefer communication through [the Discord](https://discord.gg/hKx3FJJgrV) in the #luigis-mansion channel, but you can open issues as needed.
### To-do
Project Code:
- once labelling is done, carry over these to the symbols and splits file.
Project Misc:
- Add workflow for building
- Add progress indicator for displaying
- Maybe a webpage? (why not)

Dependencies
============

Windows:
--------

On Windows, it's **highly recommended** to use native tooling. WSL or msys2 are **not** required.  
When running under WSL, [objdiff](#diffing) is unable to get filesystem notifications for automatic rebuilds.

- Install [Python](https://www.python.org/downloads/) and add it to `%PATH%`.
  - Also available from the [Windows Store](https://apps.microsoft.com/store/detail/python-311/9NRWMJP3717K).
- Download [ninja](https://github.com/ninja-build/ninja/releases) and add it to `%PATH%`.
  - Quick install via pip: `pip install ninja`

macOS:
------
- Install [ninja](https://github.com/ninja-build/ninja/wiki/Pre-built-Ninja-packages):
  ```
  brew install ninja
  ```
- Install [wine-crossover](https://github.com/Gcenx/homebrew-wine):
  ```
  brew install --cask --no-quarantine gcenx/wine/wine-crossover
  ```

After OS upgrades, if macOS complains about `Wine Crossover.app` being unverified, you can unquarantine it using:
```sh
sudo xattr -rd com.apple.quarantine '/Applications/Wine Crossover.app'
```

Linux:
------
- Install [ninja](https://github.com/ninja-build/ninja/wiki/Pre-built-Ninja-packages).
- For non-x86(_64) platforms: Install wine from your package manager.
  - For x86(_64), [WiBo](https://github.com/decompals/WiBo), a minimal 32-bit Windows binary wrapper, will be automatically downloaded and used.

Building
========

- Clone the repository:
  ```
  git clone https://github.com/Moddimation/YasikiDolphin.git
  ```

- Copy your game's disc image to `orig/GLMJ01` (or whatever version you wish to work on).
  - Supported formats: ISO (GCM), RVZ, WIA, WBFS, CISO, NFS, GCZ, TGC
  - After the initial build, the disc image can be deleted to save space.

- Configure:
  ```
  python configure.py
  ```
  To use a version other than `GLMJ01` (Japan), specify `--version <version`.
  Example usage (See its github for detailed usage):
  - `python configure.py --version GLME01` (US Release).
  - `python configure.py --version GLMP01_1` (EU Release Rev 1)
  - `python configure.py --debug` Build with debug
  - `python configure.py progress` Show progress

- Build:
  ```
  ninja
  ```

Diffing
=======

Once the initial build succeeds, an `objdiff.json` should exist in the project root. 

Download the latest release from [encounter/objdiff](https://github.com/encounter/objdiff). Under project settings, set `Project directory`. The configuration should be loaded automatically. 

Select an object from the left sidebar to begin diffing. Changes to the project will rebuild automatically: changes to source files, headers, `configure.py`, `splits.txt` or `symbols.txt`.

![](assets/objdiff.png)

Setting up Ghidra
=================

Ghidra is a tool that automatically decompiles code. Although Ghidra's output is not accurate enough to be directly copy-pasted into this decompilation project, it can still be helpful for understanding functions and decompiling them faster.

I have a shared Ghidra project for LuigisMansion already set up. To get access to this server:

* Go to https://ghidra.decomp.dev and link your Discord account.
* Create a Ghidra account by entering a new username and password into the form on the right.
* Request "Read" access to the LuigisMansion server.

Then wait for an admin to approve your request. Once you have access, you can set up the Ghidra project like so:

* To use Ghidra, you first need to install JDK. You can download OpenJDK 17 from [here](https://adoptium.net/temurin/releases/).
* Download the RootCubed Ghidra build ghidra_11.1_DEV_20240115 from [here](https://rootcubed.dev/ghidra_builds/).
* Launch Ghidra with `ghidraRun`.
* In Ghidra, go to `File -> New Project...`. Select `Shared Project` and input the following information:
    * Server Name: ghidra.decomp.dev
    * Port Number: 13100
    * User ID: (the username that you chose earlier)
    * Password: (the password that you chose earlier)
* You should now be able to view the files in the Ghidra project. You should checkout the `main` file.

Now you have Ghidra set up and ready to use.

For an introduction on how to use Ghidra, you can read [this section of the Twilight Princess decompilation's guide](https://zsrtp.link/contribute/decompiler-setup#using-ghidra).

Contributing
=======
The state of the repo is rather early, but you're nevertheless free to contribute if you want to!

Credits
=======
- encounter and NWPlayer123 for dtk-template, the used build system.
- Sage-of-Mirrors, EpochFlame and NWPlayer123 for past documentation of Luigi's Mansion.
- Modding community of Luigi's Mansion for research, documentation and modding tools of Luigi's Mansion.
- CoNesTra for updating the dtk tools and research.
- Everyone on the discord for various support.

 
~Moddimation
