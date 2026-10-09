#!/bin/bash
# qnn_run.sh <sdk> <backend.so> <context.bin> <input_list> <outdir> [extra args]
Q=$1; BE=$2; CTX=$3; IL=$4; OUT=$5; shift 5
export LD_LIBRARY_PATH=$Q/lib/x86_64-linux-clang:$LD_LIBRARY_PATH
$Q/bin/x86_64-linux-clang/qnn-net-run --backend $Q/lib/x86_64-linux-clang/$BE --retrieve_context "$CTX" \
  --input_list "$IL" --output_dir "$OUT" --use_native_input_files --use_native_output_files --log_level verbose "$@"
