#include <stdio.h>

int power(int m, int n) {
  int result = 1;
  for (int i = 0; i < n; i++) {
    result *= m;
  }
  return result;
}

int main() {
  int r = power(3, 2);
  printf("Power 2^2: %d\n", r);

  return 0;
}
