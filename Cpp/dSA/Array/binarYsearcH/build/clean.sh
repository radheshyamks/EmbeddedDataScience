#!/bin/bash
#clean all
# Enable extended globbing
shopt -s extglob
# Clean all except clean.sh and build.sh
rm -rfv !(*.sh)