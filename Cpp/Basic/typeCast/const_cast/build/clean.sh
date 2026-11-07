#!/bin/bash
# @author: radheshyam
# @date: 07-Nov-2026
# @description: clean.sh is used to clean the build directory
# searching pattern(enable extended globbing)
shopt -s extglob
# reming every files and directory except clean.sh and build.sh
rm -rfv !(clean.sh|build.sh)