#include <stdio.h>
#include <string.h>

void printChArrAsInts(char s[]) {
  int length = strlen(s);
  for (int i = 0; i < length; i++) {
    printf("%d, ", s[i]);
  }
  printf("\n");
}

void reverse(char s[]) {
  int length = strlen(s);
  char reversed[length];
  strcpy(reversed, s); // for some reason it doesn'k if i uncomment this

  for (int i = 0; i < length; i++) {
    reversed[i] = s[length - 1 - i];
  }
  strcpy(s, reversed);
}

int main() {
  char s[] = "abcd";
  printf("Original: %s\n", s);
  printChArrAsInts(s);

  reverse(s);
  printf("Reversed: %s\n", s);
  printChArrAsInts(s);
  return 0;
}
