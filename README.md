## Luigi's Mansion Decompilation

**Work in progress**

The focus currently lies on the **Japanese Release Version** of the game, but configurations for all versions were generated.

---

I heavily restructured the source layout of the original repo from [Sage-of-Mirrors](https://github.com/Sage-of-Mirrors/zmansion). This was not forked directly from it, but from [CoNesTra](https://github.com/CoNesTra/zmansion), as he put in effort to add Luigi's Mansion 3DS information to the repo and updated the [DTK](https://github.com/encounter/decomp-toolkit) tools.
I did reset the symbol list, so the % were brought back to 0.
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

My goal is to stay as original as possible, while still making it possible to work with for the decompiling efforts,
### Configuration Structure
I put every library in configure.py in a helper function according to its category, for a better interface.
### Documents
I’ve also included some small private notes in `/docs/*.txt`, which may contain useful information (if needed).
### Contributing
If you wish to be added to the Ghidra repo, feel free to ask me on Discord or open an issue.

The state of the repo is rather early, but you're nevertheless free to contribute if you want to!
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

 
~Moddimation
