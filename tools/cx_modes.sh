#!/bin/bash
# cx_modes.sh <bin> <specs (space sep, quoted)> <module>...  -> re/chromatix/modes/<spec>/
P=/mnt/f/OffLineM9-pipeline; cd $P
B=$1; SPECS=$2; shift 2
for spec in $SPECS; do
  d=$P/re/chromatix/modes/${B%.bin}/$spec; mkdir -p $d
  bash tools/qrun_ns.sh emu/chromatix /$B $d "$spec" "$@" 2>/dev/null | grep -c "node=0x[1-9a-f]" | sed "s|^|$spec found |"
done
