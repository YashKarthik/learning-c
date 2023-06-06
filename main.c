#include <stdio.h>

int main() {
  int newlines = 0;
  int c;
  while ((c = getchar()) != EOF)
    if (c == '\n')
      ++newlines;
  printf("\nCount: %d\n", newlines);
}
