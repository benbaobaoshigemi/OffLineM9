#!/bin/bash
cd /mnt/f/OffLineM9-pipeline/rom
mkdir -p system && fsck.erofs --extract=system --no-preserve system_a.img >/dev/null 2>&1; echo "rc=$?"
rm -f system_a.img
ln -sfn /mnt/f/OffLineM9-pipeline/rom/system/system /mnt/f/OffLineM9-pipeline/emu/root/system
ls /mnt/f/OffLineM9-pipeline/emu/root/system/bin/linker64 && readlink -f /mnt/f/OffLineM9-pipeline/emu/root/system/bin/linker64
