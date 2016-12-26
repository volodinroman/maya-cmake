# CMake for Maya

CMake module for Autodesk Maya. Works on Windows, OSX and Linux.

####Usage:
 - Download and install CMake from https://cmake.org and check if it works typing "cmake -h" in your terminal
 - Download Autodesk Maya SDK for your version of Maya and place the SDK content in MayaPlugins/SDK/maya20xx folder (the structure of MayaPlugins build environment is attached here)
 - Run a terminal and make ~/MayaPlugins/build folder as a current folder

- For Windows users: type 'cmake -G "Visual Studio 14 2015 Win64" ../' using your version of Vusial Studio
- For Linux users: type 'cmake -G "Unix makefiles" ../'
- For OSX users: type 'cmake -G "Xcode" ../' or 'cmake -G "Unix Makefiles" ../'
- To get more info read my post on http://romanvolodin.com/blog/posts/cross_platform_cmake/


