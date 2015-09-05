#ifndef HELL_H
#define HELL_H

// Reset argument values.
#define CONTINUE 0
#define RESET    1

// Return values.
#define WAITING 0
#define DONE    1


#define coroutine(name) int name (int reset) { static int first_state = __LINE__, state = __LINE__; if (reset) { state = first_state; }; switch(state) { case __LINE__:;
#define yield() do { state = __LINE__; return WAITING; case __LINE__:; } while (0)
#define done() state = first_state; return DONE; }

#define end done(); }

/* I USE THE BEST FUNCTION NAMES. */

long i = 0;

coroutine(one)
  play(i * (i >> 17 | i >> 9) & i >> 3);
end

coroutine(two)
  play(i * (i >> 5  | i >> 3) & i >> 2);
end

coroutine(three)
  play(louder(i * (i >> 17 | i >> 9) & 46 & i >> 3));
end

coroutine(four)
  play(louder(i * (i >> 12 | i >> 3) & 30 & (i >> 4)));
end

coroutine(five)
  play(i * (i >> 30 | i >> 5));
end

coroutine(six)
  play(i * (i >> 10 | i >> 3));
end

coroutine(seven)
  // Really quiet
  play(i * (i >> 6 | i >> 4));
end

coroutine(eight)
  // Really quiet
  play(i * (i >> 5 | i >> 5) & (i >> 2));
end

coroutine(nine)
  mono(i ^ (i >> 30 | i >> 3));
end

coroutine(ten)
  play(i ^ (i >> 30 | i >> 2));
end

coroutine(eleven)
  play(i * (i >> 10 | i >> 2) & (i >> 3));
end

coroutine(twelve)
  // Really quiet
  mono(i ^ (i & i >> 3) ^ (i >> 5));
end

coroutine(thirteen)
  // Really quiet
  mono(i ^ (i & i >> 2) ^ (i >> 5));
end

//void dadadidi() {
coroutine(dadadidi)
  LOOP(1) {
    play(i * (i >> 17 | i >> 9) & i >> 3);
    yield();
    play(i * (i >> 5  | i >> 3) & i >> 2);
    yield();
  }
end

coroutine(dadadidi2)
  LOOP(1) {
    play(louder(i * (i >> 17 | i >> 9) & 46 & i >> 3));
    yield();
    play(louder(i * (i >> 17 | i >> 9) & 46 & i >> 3));
    yield();
  }
end

coroutine(woosh)
  LOOP(1) {
    play(louder(i * (i >> 12 | i >> 3) & 30 & (i >> 4)));
    yield();
    play(i * (i >> 30 | i >> 5));
    yield();
  }
end

coroutine(something)
  LOOP(1) {
    play(quieter(i * (i >> 10 | i >> 3)));
    yield();
    play(i * (i >> 6 | i >> 4));
    yield();
  }
end

coroutine(something2)
  LOOP(1) {
    play(i * (i >> 5 | i >> 3) & 32 & i >> 2);
    yield();
    play(i * (i >> 6 | i >> 4));
    yield();
  }
end

coroutine(something2woosh)
  int _end = i + 18000;

  for (; i < _end; i++) {
    play(i * (i >> 5 | i >> 5) & (i >> 2));
    yield();
    play(i * (i >> 30 | i >> 5) & i >> 4);
    yield();
  }
end

coroutine(bass1)
  LOOP(1) {
    mono(i ^ (i >> 30 | i >> 3));
    yield();
  }
end

coroutine(bass2)
  LOOP(3) {
    if (i % 2 == 0)
      play(i ^ (i >> 30 | i >> 2));
    else
      play(i * (i >> 10 | i >> 2) & (i >> 3));

    yield();
  }
end

coroutine(bass3)
  LOOP(2) {
    if (i % 8 < 4)
      mono(i ^ (i & i >> 3) ^ (i >> 5));
    else
      mono(i ^ (i & i >> 2) ^ (i >> 5));

    yield();
  }
end

#define NUM_SOUNDS 22

int (*sounds[NUM_SOUNDS])() = {
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
