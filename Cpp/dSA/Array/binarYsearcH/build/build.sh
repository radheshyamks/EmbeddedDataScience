#!/bin/bash
# cd ../
DIR="drmemory_reports"
if [ ! -d "$DIR" ];then
    mkdir "$DIR"
fi
mkdir drmemory_reports
cmake -S .. -B . -G "MinGW Makefiles"
cmake --build ./
# mingw32-make
# cd src
./src/main_lib.exe
cmake --build . --target run_drmemory
# cd ../
# cmake -S . -B build
# cmake --build build --target run_drmemory