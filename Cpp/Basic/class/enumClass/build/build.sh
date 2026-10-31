#!/bin/bash
cmake ../ -G "MinGW Makefiles"
mingw32-make
cd main/
./mainLib.exe