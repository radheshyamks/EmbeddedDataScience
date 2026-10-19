#!/bin/bash
# Clean all
# Enable extended globbing
shopt -s extglob
rm -rfv !(clean.sh|build.sh)