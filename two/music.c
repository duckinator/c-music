#include <music.h>

#undef  play
#define play(x) putchar(louder(x))

int main() {
    int m = 10,
        x = 0;

    for (int i = 0; i < m * 3000; i++) {
        stereo(x);
        x++;
        x = x % m;
    }
}
