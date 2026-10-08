#!/bin/bash
for i in $(seq 1 120); do fuser /var/lib/dpkg/lock-frontend >/dev/null 2>&1 || break; sleep 5; done
export DEBIAN_FRONTEND=noninteractive
apt-get install -y -qq jadx >/tmp/jadx.log 2>&1; echo rc=$?; tail -2 /tmp/jadx.log; which jadx
