#include <music.h>
#include <stdlib.h>

int main() {
  int left, right;

  while (1) {
    left = rand() % NUM_SOUNDS;
    right = rand() % NUM_SOUNDS;

    LOOP(rand() % 3) {
      sounds[left]();
      sounds[right]();
    }
  }

  return 0;
}
