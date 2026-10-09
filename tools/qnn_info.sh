#!/bin/bash
# qnn_info.sh <sdk_root(wsl path)> <model.bin>...  -> <model>_info.json next to each model
Q=$1; shift
export LD_LIBRARY_PATH=$Q/lib/x86_64-linux-clang
for b in "$@"; do
  $Q/bin/x86_64-linux-clang/qnn-context-binary-utility --context_binary "$b" --json_file "${b%.bin}_info.json" 2>&1 | tail -2
done
