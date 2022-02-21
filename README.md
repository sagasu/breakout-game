# breakout-game
Win64 written in C breakout game.

In order to compile it open `Developer Command Prompt for VS 2022` to have an access to `cl` command inside a command line. Notice that `cl` is not available inside normal `cmd` or `terminal` apps, you have to run it from `Developer Command Prompt for VS 2022`. I have Visual Studio 2022 with default C++ support installed on my box. Notice that default C++ config also includes support for `C` lagunage, and `cl` is a compiler for both `C` and `C++`.  
  
  
To run: `cl game.c` inside `src` folder or you can just run `build.bat` from `scr` folder.  

`build.bat` will produce all build files in `build` folder, so files created as a result of building are not in this same folder as source files.  