#!/bin/bash
cmake ../ -G "MinGW Makefiles"
mingw32-make
cd src
./main_lib.exe