#!/usr/bin/env bash
cp /lib64/ld-linux-x86-64.so.2 /tmp/101-library.so
LD_PRELOAD=/tmp/101-library.so ./gm 9 8 10 24 75 9
