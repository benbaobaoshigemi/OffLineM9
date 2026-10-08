#!/bin/bash
cd /mnt/f/OffLineM9-pipeline/rom
mkdir -p ptmp && fsck.erofs --extract=ptmp --no-preserve product_a.img >/dev/null 2>&1; echo rc=$?
mkdir -p apk && cp ptmp/priv-app/MiuiCamera/MiuiCamera.apk apk/
rm -rf ptmp product_a.img
ls -la apk
