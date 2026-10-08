#!/bin/bash
# Run Android binary under qemu inside a private mount namespace with a fake soc0 (run as root)
E=/mnt/f/OffLineM9-pipeline/emu
exec unshare -m bash -c '
mount -t tmpfs none /sys/devices
mkdir -p /sys/devices/soc0
echo 660 > /sys/devices/soc0/soc_id; echo CANOE > /sys/devices/soc0/machine
echo Snapdragon > /sys/devices/soc0/family; echo 2.0 > /sys/devices/soc0/revision
exec qemu-aarch64-static -L '"$E"'/root -E LD_LIBRARY_PATH=/vendor/lib64:/vendor/lib64/hw:/odm/lib64:/system/lib64 "$@"
' _ "$@"
