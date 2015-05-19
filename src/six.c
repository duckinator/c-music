#include <music.h>
#include <stdlib.h>

int main() {
  int left, right;
  int offset;

  while (1) {
    left = rand() % NUM_SOUNDS;
    right = rand() % NUM_SOUNDS;

    LOOP(rand() % 3) {
      if (rand() % 2) {
        offset = rand() / 100000;
      } else {
        offset = rand() * 100000;
      }

      i *= offset;
      sounds[left]();
      sounds[right]();
      i /= offset;
    }
  }

  return 0;
}
