#!/bin/bash
P=/mnt/f/OffLineM9-pipeline
cd $P
bash tools/qrun_ns.sh emu/chromatix /${1:-wide_i.bin} $P/re/chromatix/dump $(cat $P/re/chromatix/${2:-candidates.txt} | tr -d '\r') 2>/dev/null | grep -v 'node=0x0'
