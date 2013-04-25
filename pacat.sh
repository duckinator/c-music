#!/bin/sh

./run.sh | pacat --format=u8 --rate=8000 --channels=2
