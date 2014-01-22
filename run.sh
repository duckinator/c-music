#!/bin/sh

DIR=$(dirname $(readlink -f $0))
cd $PWD

rm -f ./a.out
gcc -std=c99 -I$DIR/include $1 && ./a.out
