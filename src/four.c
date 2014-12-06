#include <music.h>
#include <stdlib.h>

#define NUM_SOUNDS4 9

void (*sounds4[NUM_SOUNDS4])() = {
  dadadidi,
  dadadidi2,
  woosh,
  something,
  something2,
  something2woosh,
  bass1,
  bass2,
  bass3,
};

int main() {
  int sound;

  while (1) {
    sound = rand() % NUM_SOUNDS;
    sounds[sound]();
  }

  return 0;
}
