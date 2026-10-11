#!/bin/bash
cmake ../ -G "MinGW Makefiles"
mingw32-make
# cd src
./StaticBinary.exe