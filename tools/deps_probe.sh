#!/bin/bash
cd /mnt/f/OffLineM9-pipeline
for l in "$@"; do
  r=$(timeout 120 bash tools/qrun.sh emu/dl "$l" 2>&1 | grep -v -i warning | tail -1)
  echo "$l : $r"
done
