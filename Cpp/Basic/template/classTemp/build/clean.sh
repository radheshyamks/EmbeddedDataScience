#!/bin/bash
# clean all
# enable extended globbing
shopt -s extglob
rm -rfv !(clean.sh|build.sh)