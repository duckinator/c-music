#ifndef HELL_H
#define HELL_H

/* I USE THE BEST FUNCTION NAMES. */

long i = 0;

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
  mono(i ^ (i >> 30 | i >> 3));
}

void ten() {
  play(i ^ (i >> 30 | i >> 2));
}

void eleven() {
  play(i * (i >> 10 | i >> 2) & (i >> 3));
}

void twelve() {
  // Really quiet
  mono(i ^ (i & i >> 3) ^ (i >> 5));
}

void thirteen() {
  // Really quiet
  mono(i ^ (i & i >> 2) ^ (i >> 5));
}

void dadadidi() {
  LOOP(1) {
    play(i * (i >> 17 | i >> 9) & i >> 3);
    play(i * (i >> 5  | i >> 3) & i >> 2);
  }
}

void dadadidi2() {
  LOOP(1) {
    play(louder(i * (i >> 17 | i >> 9) & 46 & i >> 3));
    play(louder(i * (i >> 17 | i >> 9) & 46 & i >> 3));
  }
}

void woosh() {
  LOOP(1) {
    play(louder(i * (i >> 12 | i >> 3) & 30 & (i >> 4)));
    play(i * (i >> 30 | i >> 5));
  }
}

void something() {
  LOOP(1) {
    play(quieter(i * (i >> 10 | i >> 3)));
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
    mono(i ^ (i >> 30 | i >> 3));
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
      mono(i ^ (i & i >> 3) ^ (i >> 5));
    else
      mono(i ^ (i & i >> 2) ^ (i >> 5));
  }
}

#define NUM_SOUNDS 22

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

#endif /* HELL_H */
