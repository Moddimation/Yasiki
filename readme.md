# Luigi's Mansion  
[![Build Status]][actions] [![Code Progress]][progress] [![Functions]][progress] [![Wiki]][wikipage]

---

Yasiki is a work-in-progress decompilation project of [**Luigi's Mansion**](https://wikipedia.org/wiki/Luigi%27s_Mansion) for the [**Nintendo GameCube**](https://en.wikipedia.org/wiki/GameCube).  <br><br>
The focus is currently laid on the Japanese release (GLMJ01), but configurations exist for all available versions.  <br>
The original creator first focused on the North American release (GLME01), and it's symbols.txt was copied to a backup file.

### Note:  <br>
**this will not produce a playable game**, if you do not supply it beforehand.  <br>

### Warning  <br>
This game does *no*t ship with *symbols*, so information is scraped together from *RTTI* and connected games.  <br>
Not as simple as most projects, but possible.

### Discord / Contact
*For this project specifically:*  <br>
**Yasiki Parlor**: [![Discord Badge]][discord]  <br>
*For general, other gc/wii purposes (ask for pc ports!):*  <br>
**GC/Wii Decompilation**: [![Discord Badge OG]][discord-og]  <br>

## Index
- [Available versions](#available-versions)
- [About this project](#about-this-project)
  - [Progress state](#progress-state)
  - [Folder structure](#folder-structure)
  - [Documents](#documents)
  - [Misc](#misc)
- [Contributing](#contributing)
- [Setting up build](#setting-up-build)
- [Building](#building)
- [Diffing](#diffing)
- [Setting up Ghidra](#setting-up-ghidra)
- [Detailed progress](#detailed-progress)
- [Credits](#credits)



## Available versions
| Config ID | Region | Variant | Active? | Release Date |  Build Date  | SDK Rev. |  SDK Build   | Apploader Build |
|-----------|--------|---------|----------|--------------|--------------|----------|--------------|------------------|
| GLMJ01    | Japan  | Release |       Yes| Sep. 14 2001 | Aug. 28 2001 |    37    | Jul. 19 2001 | Apr. 04 2001 |
| GLME01    |  USA   | Release |   [No]   | Nov. 18 2001 | Sep. 24 2001 |    37    | Jul. 19 2001 | Aug. 9 2001 |
| GLME01_1  |  USA   |  Demo   |    No    | Oct.    2001 | Sep. 28 2001 |    45    | Sep. 08 2001 | Sep. 08 2001 |
| GLMP01    | Europe |  Demo   |    No    | Mar.    2002 | Jan. 21 2002 |    49    | Dec. 17 2001 | Nov. 30 2001 |
| GLMP01_1  | Europe | Release |    No    | May   3 2002 | Mar.    2002 |    49    | Dec. 17 2001 | Nov. 30 2001 |
| GLMP01_2  | Europe | Release |    No    | May  17 2002 | Mar     2002 |    49    | Dec. 17 2001 | Nov. 30 2001 |
*note that the Europe Release Rev. 1 left the DOL identical, only changing the movie rating.* 
*furthermore, the USA Release had previously been the decomp target, but now the active one is the Japan Release.*

## About this project
This project uses the [Decomp-Toolkit template](https://github.com/encounter/dtk-template).

- [Progress state](#progress-state)
- [Folder structure](#folder-structure)
- [Documents](#documents)
- [Misc](#misc)

### Progress state
Rather early. I was trying to fill out the symbols in the Ghidra repository (read further to learn how to connect to the server),
but decided to start with matching libraries instead, as the game code uses them, and it is better to go step for step rather than losing the sight of progress.
### Folder structure
The folders are split by categories inside of the 'decomp' folder in the project's root, as follows:  
 `/decomp/<category>/...`
 
Most modules in a library rely on the modular scheme used originally, such as:
 `/decomp/JSystem/System/JKernel/ src/include`,  
 `/decomp/JSystem/System/JSupport/ src/include`,  
 `/decomp/JSystem/JAudio/JAInterface/ src/include`,  
 `/decomp/Project/Kawamoto/  src/include`,  
 `/decomp/Project/Sotoike/  src/include`,  
 `/decomp/Project/Koga/  src/include`,
and so on.

My goal is to stay as original as possible, while still making it possible to work with for the decompiling efforts.
### Documents
I’ve also included some small private notes in `/docs/game/*.txt`, which may contain useful information (if needed).
### Misc
- You can put personal stuff in /private/, it is ignored by github.
- I prefer communication through the Discord, [Yasiki Parlor](https://discord.gg/697xRJJww3), but you can open issues as needed.

## Contributing

You are welcome to contribute, even pointing out small mistakes/issues counts as contributing!  

The guidelines for contributing have yet to be written, but that hopefully won't stop you.

## Setting up build

### Windows:

On Windows, it's **highly recommended** to use native tooling. WSL or msys2 are **not** required.  
When running under WSL, [objdiff](#diffing) is unable to get filesystem notifications for automatic rebuilds.

- Install [Python](https://www.python.org/downloads/) and add it to `%PATH%`.
  - Also available from the [Windows Store](https://apps.microsoft.com/store/detail/python-311/9NRWMJP3717K).
- Download [ninja](https://github.com/ninja-build/ninja/releases) and add it to `%PATH%`.
  - Quick install via pip: `pip install ninja`

### macOS:

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

### Linux:

- Install [ninja](https://github.com/ninja-build/ninja/wiki/Pre-built-Ninja-packages).
- For non-x86(_64) platforms: Install wine from your package manager.
  - For x86(_64), [WiBo](https://github.com/decompals/WiBo), a minimal 32-bit Windows binary wrapper, will be automatically downloaded and used.

## Building


- Clone the repository:
  ```
  git clone https://github.com/Moddimation/Yasiki.git
  ```

- Copy your game's disc image to `orig/<VERSION>`.
    - Supported formats: ISO (GCM), RVZ, WIA, WBFS, CISO, NFS, GCZ and TGC.
    - After initial build, you may remove the image.
    - Also delete all files in `orig/<VERSION>` except `orig/<VERSION>/sys/main.dol` to save space, if you don't need the assets as reference.
- Configure:
  ```
  python configure.py
  ```
  To use a version other than `GLMJ01` (Japan), specify `--version <version`. (See all possible versions at the top)
  Example usage (See its github for detailed usage):
  - `python configure.py --version GLME01` (US Release).
  - `python configure.py --version GLMP01_2` (EU Release Rev 1)
  - `python configure.py --debug` Build with debug
  - `python configure.py --map` Build and generate map (for comparison)
  - `python configure.py progress` Show progress, nothing else

- Build:
  ```
  ninja
  ```
- Useful:
  - `ninja diff` When failing to build, check the differences (command line only).
  - `ninja apply` When finished decompiling a file, and marking it as Matching in configure.py, this updates the symbols.txt for correctness.


## Diffing

Once the initial build succeeds, an `objdiff.json` should exist in the project root. 

Download the latest release from [encounter/objdiff](https://github.com/encounter/objdiff).

Under project settings, set `Project directory` to the root, aka the file containing the `objdiff.json` file. The configuration should be loaded automatically, and if not, ensure that the build generated no errors. If it did, resolve these and try again.

Select an object from the left sidebar to begin diffing. Changes to the project will rebuild automatically: changes to source files, headers, `configure.py`, `splits.txt` or `symbols.txt`.

![Screenshot of Objdiff](docs/decomp/objdiff.png)

## Setting up Ghidra

Ghidra is a tool that automatically decompiles code. Although Ghidra's output is not accurate enough to be directly copy-pasted into this decompilation project, it can still be helpful for understanding functions and decompiling them faster. You are free to use other decompilation methods, such as IDA, m2c or manually, but ghidra was chosen as the preferred tool in the gamecube/wii decomp scene.

I've got a shared Ghidra project for LuigisMansion already set up, that I usually update. To get access to this server:

* Go to https://ghidra.decomp.dev and link your Discord account.
* Create a Ghidra account by entering a new username and password into the form on the right.
* Request "Read" access to the LuigisMansion server.

Then wait for an admin to approve your request. Once you have access, you can set up the Ghidra project like so:

* To use Ghidra, you first need to install JDK. You can download OpenJDK 17 from [here](https://adoptium.net/temurin/releases/).
* Download the RootCubed Ghidra build ghidra_11.4_DEV_20250425 from the link in the `Download section `[here](https://rootcubed.dev/ghidra_builds/).
(*OPTIONAL) If you wish to load/analyze other binaries for gamecube/wii, you need the `Ghidra-GameCube-Loader` extension, which you can get on the RootCubed Ghidra page.
* Launch Ghidra with `ghidraRun`.
* In Ghidra, go to `File -> New Project...`. Select `Shared Project` and input the following information:
    * Server Name: ghidra.decomp.dev
    * Port Number: 13100
    * User ID: (the username that you chose earlier)
    * Password: (the password that you chose earlier)
* You should now be able to view the files in the Ghidra project. You should checkout the `main` file.

Now you have Ghidra set up and ready to use.

For an introduction on how to use Ghidra, you can read [this section of the Twilight Princess decompilation's guide](https://zsrtp.link/contribute/decompiler-setup#using-ghidra).

## Timeline

### Game
<ul>
  <li><span style="display:inline-block; width: 110px">Aug. 24 2000</span> Presented at SpaceWorld 2000 simply as a tech-demo to show the power of the gamecube</li>
  <!--<li><span style="display:inline-block; width: 110px">???. ?? 2000</span> Nintendo decides to shape a full game Project out of that demo.</li>-->
  <li><span style="display:inline-block; width: 110px">Aug. 24 2001</span> Presented at SpaceWorld 2001 as an actual game title</li>
  <li><span style="display:inline-block; width: 110px">2001 - 2002</span> Various game releases on gamecube</li>
  <li><span style="display:inline-block; width: 110px">Sep. 13 2018</span> 3DS port announced</li>
  <li><span style="display:inline-block; width: 110px">Oct. 19 2018</span> 3DS port released</li>
</ul>

### Project
<ul>
  <li><span style="display:inline-block; width: 110px">Sep. 9 2022</span> luigis-mansion channel created in discord</li>
  <li><span style="display:inline-block; width: 110px"><b>Dec. 15 2022</b></span> Sage-of-Mirrors creates <a href="https://github.com/Sage-of-Mirrors/zmansion">zmansion repo on github</a></li>
  <li><span style="display:inline-block; width: 110px">Dec. 18 2023</span> Sage-of-Mirrors last activity in #luigis-mansion channel</li>
  <li><span style="display:inline-block; width: 110px"><b>Dec. 12 2024</b></span> CoNesTra forks <a href="https://github.com/CoNesTra/zmansion">Sage-of-Mirrors/zmansion</a> and updates toolchain</li>
  <li><span style="display:inline-block; width: 110px"><b>Mar. 20 2024</b></span> Moddimation forks <a href="https://github.com/Moddimation/zmansion">CoNesTra/zmansion</a> </li>
  <li><span style="display:inline-block; width: 110px">Apr. 9 2025</span> #luigis-mansion channel is revived</li>
  <li><span style="display:inline-block; width: 110px">Apr. 23 2025</span> project is back on decomp.dev</li>
</ul>

## Detailed progress

Project Yasiki  <br>
![ProjectCode](https://decomp.dev/projects/948728710.svg?mode=shield&version=GLMJ01&label=Code&labelColor=%23005c12&color=%23575757&style=flatsquare&measure=matched_code_size) ![ProjectData](https://decomp.dev/projects/948728710.svg?mode=shield&version=GLMJ01&label=Data&labelColor=%232b2b2b&color=%23575757&style=flatsquare&measure=matched_data_size) ![ProjectFunc](https://decomp.dev/projects/948728710.svg?mode=shield&version=GLMJ01&label=Functions&labelColor=%232b2b2b&color=%23575757&style=flatsquare&measure=matched_functions) ![ProjectUnits](https://decomp.dev/projects/948728710.svg?mode=shield&version=GLMJ01&label=Units&labelColor=%232b2b2b&color=%23575757&style=flatsquare&measure=complete_units)  <br>
Main App  <br>
![MainAppCode](https://decomp.dev/projects/948728710.svg?mode=shield&version=GLMJ01&category=game&label=Code&labelColor=%23003d1e&color=%23575757&style=flatsquare&measure=matched_code_size) ![MainAppData](https://decomp.dev/projects/948728710.svg?mode=shield&version=GLMJ01&category=game&label=Data&labelColor=%232b2b2b&color=%23575757&style=flatsquare&measure=matched_data_size) ![MainAppFunc](https://decomp.dev/projects/948728710.svg?mode=shield&version=GLMJ01&category=game&label=Functions&labelColor=%232b2b2b&color=%23575757&style=flatsquare&measure=matched_functions) ![MainAppUnit](https://decomp.dev/projects/948728710.svg?mode=shield&version=GLMJ01&category=game&label=Units&labelColor=%232b2b2b&color=%23575757&style=flatsquare&measure=complete_units)  <br>
JSystem Framework  <br>
![JSysCode](https://decomp.dev/projects/948728710.svg?mode=shield&version=GLMJ01&category=jsys&label=Code&labelColor=%23004d57&color=%23575757&style=flatsquare&measure=matched_code_size) ![JSysData](https://decomp.dev/projects/948728710.svg?mode=shield&version=GLMJ01&category=jsys&label=Data&labelColor=%232b2b2b&color=%23575757&style=flatsquare&measure=matched_data_size) ![JSysFunc](https://decomp.dev/projects/948728710.svg?mode=shield&version=GLMJ01&category=jsys&label=Functions&labelColor=%232b2b2b&color=%23575757&style=flatsquare&measure=matched_functions) ![JSysUnit](https://decomp.dev/projects/948728710.svg?mode=shield&version=GLMJ01&category=jsys&label=Units&labelColor=%232b2b2b&color=%23575757&style=flatsquare&measure=complete_units)  <br>
Dolphin SDK  <br>
![SDKCode](https://decomp.dev/projects/948728710.svg?mode=shield&version=GLMJ01&category=sdk&label=Code&labelColor=%23004b85&color=%23575757&style=flatsquare&measure=matched_code_size) ![SDKData](https://decomp.dev/projects/948728710.svg?mode=shield&version=GLMJ01&category=sdk&label=Data&labelColor=%232b2b2b&color=%23575757&style=flatsquare&measure=matched_data_size) ![SDKFunc](https://decomp.dev/projects/948728710.svg?mode=shield&version=GLMJ01&category=sdk&label=Functions&labelColor=%232b2b2b&color=%23575757&style=flatsquare&measure=matched_functions) ![SDKUnit](https://decomp.dev/projects/948728710.svg?mode=shield&version=GLMJ01&category=sdk&label=Units&labelColor=%232b2b2b&color=%23575757&style=flatsquare&measure=complete_units)  <br>
CodeWarrior Runtime  <br>
![CWCode](https://decomp.dev/projects/948728710.svg?mode=shield&version=GLMJ01&category=cw&label=Code&labelColor=%23132fa0&color=%23575757&style=flatsquare&measure=matched_code_size) ![CWDATA](https://decomp.dev/projects/948728710.svg?mode=shield&version=GLMJ01&category=cw&label=Data&labelColor=%232b2b2b&color=%23575757&style=flatsquare&measure=matched_data_size) ![CWFunc](https://decomp.dev/projects/948728710.svg?mode=shield&version=GLMJ01&category=cw&label=Functions&labelColor=%232b2b2b&color=%23575757&style=flatsquare&measure=matched_functions) ![CWUnit](https://decomp.dev/projects/948728710.svg?mode=shield&version=GLMJ01&category=sdk&label=Units&labelColor=%232b2b2b&color=%23575757&style=flatsquare&measure=complete_units)  <br>

## Credits

- Nintendo and it's developers for this great masterpiece
- encounter and NWPlayer123 for dtk-template, the used build system.
- Sage-of-Mirrors, EpochFlame and NWPlayer123 for past documentation of Luigi's Mansion.
- Modding community of Luigi's Mansion for research, documentation and modding tools of Luigi's Mansion.
- CoNesTra for updating the dtk tools and research.
- Everyone on the discord for various support.

 
~Moddimation



[Build Status]: https://github.com/Moddimation/Yasiki/actions/workflows/build.yml/badge.svg
[actions]: https://github.com/Moddimation/Yasiki/actions/workflows/build.yml
[Code Progress]: https://decomp.dev/Moddimation/Yasiki.svg?mode=shield&measure=code&label=Code
[progress]: https://decomp.dev/Moddimation/Yasiki
[Discord Badge OG]: https://img.shields.io/discord/727908905392275526?color=%237289DA&logo=discord&logoColor=%23FFFFFF
[Discord Badge]: https://img.shields.io/discord/1373544736165728296?color=%237289DA&logo=discord&logoColor=%23FFFFFF
[discord-og]: https://discord.gg/hKx3FJJgrV
[discord]: https://discord.gg/697xRJJww3
[Wiki]: https://img.shields.io/badge/Wiki-page-blue
[wikipage]: https://moddimation.github.io/Yasiki
[Functions]: https://decomp.dev/Moddimation/Yasiki.svg?mode=shield&measure=functions&label=Functions


