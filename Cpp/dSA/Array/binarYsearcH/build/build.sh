#!/bin/bash
# cd ../
cmake -S .. -G "MinGW Makefiles"
cmake --build ./
# mingw32-make
# cd src
./src/main_lib.exe
cmake --build . --target run_drmemory &> build.log
# cd ../
# cmake -S . -B build
# cmake --build build --target run_drmemory