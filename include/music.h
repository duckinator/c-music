#ifndef MUSIC_H
#define MUSIC_H

#include <stdio.h>

#define LOOP(seconds) int end = i + (seconds * 8000); for (; i < end; i++)

#define quieter(x) ( ((x) & 0xFF) >> 2)
#define louder(x)  (  (x) << 2 )

#define play(x) putchar(quieter(x))
#define stereo(x) do { play(x); play(x); } while(0)

#include <hell.h>

#endif /* MUSIC_H */
