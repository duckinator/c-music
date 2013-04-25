#define LOOP(seconds) int end = i + (seconds * 8000); for (; i < end; i++)

#define adjust_volume(x) ( ((x) & 0xFF) >> 2)

#define play(x) putchar(adjust_volume(x))
#define stereo(x) do { play(x);play(x); } while(0)

/* I USE THE BEST FUNCTION NAMES. */

int i = 0;

void dadadidi() {
  LOOP(1) {
    play(i * (i >> 17 | i >> 9) & i >> 3);
    play(i * (i >> 5  | i >> 3) & i >> 2);
  }
}

void dadadidi2() {
  LOOP(1) {
    play(i * (i >> 17 | i >> 9) & 46 & i >> 3);
    play(i * (i >> 6 | i >> 4));
  }
}

void woosh() {
  LOOP(1) {
    play(i * (i >> 12 | i >> 3) & 30 & i << 4);
    play(i * (i >> 30 | i >> 5));
  }
}

void something() {
  LOOP(1) {
    play(i * (i >> 10 | i >> 3));
    play(i * (i >> 6 | i >> 4));
  }
}

void something2() {
  LOOP(1) {
    play(i * (i >> 5 | i >> 3) & 32 & i >> 2);
    play(i * (i >> 6 | i >> 4));
  }
}

void something2woosh() {
  int end = i + 18000;

  for (; i < end; i++) {
    play(i * (i >> 5 | i >> 5) & (i >> 2));
    play(i * (i >> 30 | i >> 5) & i >> 4);
  }
}

void bass1() {
  LOOP(1) {
    play(i ^ (i >> 30 | i >> 3));
  }
}

void bass2() {
  LOOP(3) {
    if (i % 2 == 0)
      play(i ^ (i >> 30 | i >> 2));
    else
      play(i * (i >> 10 | i >> 2) & (i >> 3));
  }
}

void bass3() {
  LOOP(2) {
    if (i % 8 < 4)
      stereo(i ^ (i & i >> 3) ^ (i >> 5));
    else
      stereo(i ^ (i & i >> 2) ^ (i >> 5));
  }
}

int main() {
  int j;

  bass3();

  for (j = 0; j < 2; j++)
    dadadidi();

  woosh();
  bass1();
  bass2();
  bass1();
  bass3();
  something();
  dadadidi2();
  something();
  dadadidi();
  something2();
  something();
  something2woosh();

  return 0;
}
