#ifndef MUSIC_H
#define MUSIC_H

#include <stdio.h>

#define LOOP(seconds) int _end = i + (seconds * 8000); for (; i < _end; i++)

#define quieter(x) ( ((x) & 0xFF) >> 2)
#define louder(x)  (  (x) << 2 )

#define play(x) do { putchar(quieter(x)); i++; } while(0)
#define stereo(x, y) do { play(x); play(y); } while(0)
#define mono(x) stereo(x, x)

#include <hell.h>

#endif /* MUSIC_H */
