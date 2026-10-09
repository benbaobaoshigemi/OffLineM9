#!/bin/bash
Q=/mnt/f/qairt/qairt/2.33.0.250327
cd /mnt/f/OffLineM9-pipeline/re/models
export LD_LIBRARY_PATH=$Q/lib/x86_64-linux-clang
strace -f -e trace=execve,openat,access,stat,newfstatat -o /tmp/qs.txt $Q/bin/x86_64-linux-clang/qnn-net-run \
  --backend $Q/lib/x86_64-linux-clang/libQnnHtpQemu.so --retrieve_context styletrans_low.bin \
  --input_list list_low.txt --output_dir out_low --use_native_input_files --use_native_output_files >/tmp/qrun.log 2>&1
grep -c . /tmp/qs.txt
grep execve /tmp/qs.txt | head
grep ENOENT /tmp/qs.txt | grep -iv 'locale\|gconv\|/proc\|ld.so\|glibc-hwcaps\|tls/' | tail -30
