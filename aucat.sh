#!/bin/sh

./run.sh | aucat -c 0:0 -e u8 -h raw -r 8000 -v 96 -i -
