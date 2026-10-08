#!/bin/bash
# cx.sh <bin> <modespec> <module>...
P=/mnt/f/OffLineM9-pipeline
cd $P
B=$1; M=$2; shift 2
bash tools/qrun_ns.sh emu/chromatix /$B $P/re/chromatix/dump "$M" "$@" 2>/dev/null | grep -E "node="
