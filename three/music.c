#include <music.h>
#include <stdlib.h>

/* I USE THE BEST FUNCTION NAMES. */

int i = 0;

void one() {
  play(i * (i >> 17 | i >> 9) & i >> 3);
}

void two() {
  play(i * (i >> 5  | i >> 3) & i >> 2);
}

void three() {
  play(louder(i * (i >> 17 | i >> 9) & 46 & i >> 3));
}

void four() {
  play(louder(i * (i >> 12 | i >> 3) & 30 & (i >> 4)));
}

void five() {
  play(i * (i >> 30 | i >> 5));
}

void six() {
  play(i * (i >> 10 | i >> 3));
}

void seven() {
  // Really quiet
  play(i * (i >> 6 | i >> 4));
}

void eight() {
  // Really quiet
  play(i * (i >> 5 | i >> 5) & (i >> 2));
}

void nine() {
  stereo(i ^ (i >> 30 | i >> 3));
}

void ten() {
  play(i ^ (i >> 30 | i >> 2));
}

void eleven() {
  play(i * (i >> 10 | i >> 2) & (i >> 3));
}

void twelve() {
  // Really quiet
  stereo(i ^ (i & i >> 3) ^ (i >> 5));
}

void thirteen() {
  // Really quiet
  stereo(i ^ (i & i >> 2) ^ (i >> 5));
}

#define NUM_SOUNDS 13

void (*sounds[NUM_SOUNDS])() = {
  one,
  two,
  three,
  four,
  five,
  six,
  seven,
  eight,
  nine,
  ten,
  eleven,
  twelve,
  thirteen,
};

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
