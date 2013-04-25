#if false
  gcc $0 && ./a.out | aplay && rm a.out
  exit
#endif

/* I USE THE BEST FUNCTION NAMES. */

int i = 0;

void dadadidi() {
  int end = i + 8000;

  for(; i < end; i++) {
    putchar(i * (i >> 17 | i >> 9) & 46 & i >> 3);
    putchar(i * (i >> 5  | i >> 3));
  }
}

void dadadidi2() {
  int end = i + 8000;

  for(; i < end; i++) {
    putchar(i * (i >> 17 | i >> 9) & 46 & i >> 3);
    putchar(i * (i >> 6 | i >> 4));
  }
}

void woosh() {
  int end = i + 8000;

  for(; i < end; i++) {
    putchar(i * (i >> 12 | i >> 3) & 30 & i << 4);
    putchar(i * (i >> 30 | i >> 5));
  }
}

void something() {
  int end = i + 8000;
  for (; i < end; i++) {
    putchar(i * (i >> 10 | i >> 3));
    putchar(i * (i >> 6 | i >> 4));
  }
}

void something2() {
  int end = i + 8000;

  for (; i < end; i++) {
    putchar(i * (i >> 5 | i >> 3) & 32 & i >> 2);
    putchar(i * (i >> 6 | i >> 4));
  }
}

void something2woosh() {
  int end = i + 18000;

  for(; i < end; i++) {
    putchar(i * (i >> 5 | i >> 3) & 32 & i >> 2);
    //putchar(i * (i >> 12 | i >> 3) & 30 & i << 4);
    //putchar(i * (i >> 30 | i >> 5));
    putchar(i * (i >> 30 | i >> 5) & i >> 4);
  }
}

int main() {
  int j;

  for (j = 0; j < 2; j++)
    dadadidi();

  woosh();
  something();
  dadadidi2();
  something();
  dadadidi();
  something2();
  something();
  something2woosh();

  return 0;
}
