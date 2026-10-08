#!/bin/bash
E=/mnt/f/OffLineM9-pipeline/emu
exec qemu-aarch64-static -L $E/root -E LD_LIBRARY_PATH=/vendor/lib64:/vendor/lib64/hw:/odm/lib64:/system/lib64:/apex/com.android.runtime/lib64/bionic "$@"
