#!/bin/sh

DIR=$(dirname $(readlink -f $0))

$DIR/run.sh | aucat -c 0:1 -e u8 -h raw -r 8000 -v 96 -i -
