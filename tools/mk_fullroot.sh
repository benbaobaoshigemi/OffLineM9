#!/bin/bash
# Full Android root for qemu: symlinks into the extracted ROM (read-only use)
R=/mnt/f/OffLineM9/rom
E=/mnt/f/OffLineM9-pipeline/emu
mkdir -p $E/root/apex
cd $E/root
ln -sfn $R/system/system system
ln -sfn $R/vendor vendor
ln -sfn $R/odm odm
ln -sfn /mnt/f/OffLineM9/emu/sysroot/apex/com.android.runtime apex/com.android.runtime
ls -la $E/root
