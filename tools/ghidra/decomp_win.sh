#!/bin/bash
# decomp_win.sh <lib(win path)> <out.c(win path)> <addr>...  - Ghidra 11.1.2 headless on Windows
LIB=$1; OUT=$2; shift 2
G=/f/ghidra_11.1.2_PUBLIC
N=$(basename "$LIB")
P=F:/OffLineM9-pipeline/re/ghidra
mkdir -p /f/OffLineM9-pipeline/re/ghidra
if [ ! -d "/f/OffLineM9-pipeline/re/ghidra/${N}.rep" ]; then
  MODE=(-import "$LIB" -max-cpu 16)
else
  MODE=(-process "$N" -noanalysis)
fi
cmd //c "$(cygpath -w $G/support/analyzeHeadless.bat)" "$P" "$N" "${MODE[@]}" \
   -scriptPath "F:/OffLineM9-pipeline/tools/ghidra" -postScript DecompileAt.java "$OUT" "$@" 2>&1 \
   | grep -E "ERROR|Import succeeded|DecompileAt|REPORT" | tail -8
