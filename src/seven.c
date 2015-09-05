#include <music.h>
#include <stdlib.h>
#include <time.h>

int get_iterations(int limit) {
  printf("limit: %i\n", limit);
  if (limit == 0) {
    limit == 3;
  }

  printf("limit: %i\n", limit);

  int value = rand() % limit + 1;

  printf("value: %i\n", value);
  return value;
}

#define NUM_LEFT_SOUNDS 18
int (*left_sounds[NUM_LEFT_SOUNDS])() = {
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
  dadadidi,
  dadadidi2,
  woosh,
  something,
  something2,
};

#define NUM_RIGHT_SOUNDS 6
int (*right_sounds[NUM_RIGHT_SOUNDS])() = {
  eleven,
  twelve,
  thirteen,
  bass1,
  bass2,
  bass3,
};


int main() {
  int (*left)(), (*right)();
  int left_iterations = 0,
      right_iterations = 0;
  int offset;

  srand(time(NULL)); // Something something horrible seed something good thing this is just for generating audio.

  while (1) {
    left_iterations -= 1;
    if (left_iterations <= 0) {
      left = left_sounds[rand() % NUM_LEFT_SOUNDS];
      left_iterations = get_iterations(5);
    }

    right_iterations -= 1;
    if (right_iterations <= 0) {
      right = right_sounds[rand() % NUM_RIGHT_SOUNDS];
      right_iterations = get_iterations(3);
    }

    if (rand() % 2) {
      offset = rand() / 1000;
    } else {
      offset = rand() * 1000;
    }

    i *= offset;

    left(RESET);
    right(RESET);

    while(left(CONTINUE) || right(CONTINUE))
      ;

    i /= offset;
  }

  return 0;
}
