#!/bin/bash
# decomp.sh <lib> <out.c> <addr>...   (addresses as in a64.py, i.e. relative to image base 0)
LIB=$1; OUT=$2; shift 2
G=$(ls -d /opt/ghidra_*_PUBLIC | head -1)
P=/tmp/ghproj_$(basename $LIB | tr . _)
mkdir -p $P
if [ ! -d $P/p.rep ]; then
  $G/support/analyzeHeadless $P p -import "$LIB" -scriptPath /mnt/f/OffLineM9-pipeline/tools/ghidra \
     -postScript DecompileAt.java "$OUT" "$@" -max-cpu 16 2>&1 | grep -E "ERROR|INFO  ANALYZING|Import succeeded|DecompileAt" | tail -5
else
  $G/support/analyzeHeadless $P p -process "$(basename $LIB)" -noanalysis -scriptPath /mnt/f/OffLineM9-pipeline/tools/ghidra \
     -postScript DecompileAt.java "$OUT" "$@" 2>&1 | grep -E "ERROR|DecompileAt" | tail -5
fi
