#!/bin/sh

rm -f ./a.out
cd $PWD
gcc -std=c99 music.c && ./a.out
