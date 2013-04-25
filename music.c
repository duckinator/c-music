#if false
  gcc $0 && ./a.out | aplay && rm a.out
  exit
#endif

#define LOOP(seconds) int end = i + (seconds * 8000); for (; i < end; i++)

/* I USE THE BEST FUNCTION NAMES. */

int i = 0;

void dadadidi() {
  LOOP(1) {
    putchar(i * (i >> 17 | i >> 9) & 46 & i >> 3);
    putchar(i * (i >> 5  | i >> 3));
  }
}

void dadadidi2() {
  LOOP(1) {
    putchar(i * (i >> 17 | i >> 9) & 46 & i >> 3);
    putchar(i * (i >> 6 | i >> 4));
  }
}

void woosh() {
  LOOP(1) {
    putchar(i * (i >> 12 | i >> 3) & 30 & i << 4);
    putchar(i * (i >> 30 | i >> 5));
  }
}

void something() {
  LOOP(1) {
    putchar(i * (i >> 10 | i >> 3));
    putchar(i * (i >> 6 | i >> 4));
  }
}

void something2() {
  LOOP(1) {
    putchar(i * (i >> 5 | i >> 3) & 32 & i >> 2);
    putchar(i * (i >> 6 | i >> 4));
  }
}

void something2woosh() {
  int end = i + 18000;

  for (; i < end; i++) {
    putchar(i * (i >> 5 | i >> 3) & 32 & i >> 2);
    putchar(i * (i >> 30 | i >> 5) & i >> 4);
  }
}

void bass1() {
  LOOP(1) {
    putchar(i ^ (i >> 30 | i >> 3));
  }
}

void bass2() {
  LOOP(1) {
    if (i % 2)
      putchar(i ^ (i >> 30 | i >> 2));
    else
      putchar(i);
  }
}

void bass3() {
  LOOP(4) {
    //putchar(i ^ (i & i >> 5));
    putchar(i ^ (i & i >> 3) & (i >> 5));
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
