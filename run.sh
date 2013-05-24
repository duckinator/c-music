#!/bin/sh

rm -f ./a.out
cd $PWD
gcc music.c && ./a.out
