#include <stdio.h>

int power(int m, int n) {
  extern int test;
  int result = 1;
  for (int i = 0; i < n; i++) {
    result *= m;
    result += test;
  }
  return result;
}

int test;

int main() {
  int r = power(3, 2);
  printf("Power 2^2: %d\n", r);

  return 0;
}
