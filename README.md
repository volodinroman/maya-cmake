# CMake for Maya

CMake module for Autodesk Maya. Works on Windows, OSX and Linux.

## Usage:
 - Download and install CMake from https://cmake.org and check if it works typing "cmake -h" in your terminal
 - Download Autodesk Maya SDK for your version of Maya and place the SDK content in MayaPlugins/SDK/maya20xx folder (the structure of MayaPlugins build environment is attached here)
 - Run a terminal and make ~/MayaPlugins/build folder as a current folder

- For Windows users: type **cmake -G "Visual Studio 15 2017 Win64" ../** using your version of Vusial Studio
- If we want to build a plugin for some specific maya version, we use **cmake G "Visual Studio 15 2017 Win64" -DMAYA_VERSION=2016 ../**
- For Linux users: type **cmake -G "Unix makefiles" ../**
- For OSX users: type **cmake -G "Xcode" ../** or **cmake -G "Unix Makefiles" ../**

- After building the solution (sln) we can compile it with **cmake --build . --config Release**. It is important that the current dir is the **build** one, where the solution files are located.
- If we want to copy compiled plug-in somewhere (maya plugins folder), we use **cmake --build . --config Release --target Install**. It will copy the built plug-in to a folder, specified with CMAKE_INSTALL_PREFIX (CMakeLists.txt)


