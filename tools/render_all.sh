#!/bin/bash
# full-resolution M9 renders of every sample with the exact StyleTrans backend
cd /f/OffLineM9-pipeline
export M9_QNN_JOBS=${M9_QNN_JOBS:-2}
for f in samples/*.dng; do
  o=out/final/$(basename $f .dng)_M9.jpg
  [ -s "$o" ] && continue
  /c/Users/zhang/miniconda3/python.exe -m m9.render "$f" -o "$o" 2>&1 | tail -2
done
echo ALLDONE
