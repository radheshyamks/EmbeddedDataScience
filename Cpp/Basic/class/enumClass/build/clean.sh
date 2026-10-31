#!/bin/bash
# searching pattern(enable extended globbing)
shopt -s extglob
# cleaning every files and directory except clean.sh and build.sh
rm -rfv !(clean.sh|build.sh)