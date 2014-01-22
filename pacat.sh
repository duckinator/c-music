#!/bin/sh

DIR=$(dirname $(readlink -f $0))

$DIR/run.sh $1 | pacat --format=u8 --rate=8000 --channels=2
