#!/usr/bin/env bash

./run.sh | aucat -c 0:0 -e u8 -h raw -r 8000 -i -
