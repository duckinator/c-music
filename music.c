#if false
  gcc $0 && ./a.out | aplay && rm a.out
  exit
#endif

int main(i) {
  for(i=0; i < 32000; i++) {
    putchar(i * (i >> 17 | i >> 9) & 46 & i >> 3);
    putchar(i * (i >> 5 | i >> 3));
  }

  return 0;
}
