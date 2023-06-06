#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  printf("Fahrenheit \t Celsius\n");
  printf("------------------------\n");
  for (float fahr = 0.0; fahr <= 300.0; fahr += 20.0) {
    float celsius = 5.0 * (fahr - 32.0) / 9.0;
    printf("%7.0f F \t %4.1f C\n", fahr, celsius);
  }
}

/*
  Learn about advanced C concepts:
      Study pointers, which are an important feature in C for memory manipulation and efficient programming.
      Understand arrays, strings, and how to work with them in C.
      Explore structures and unions for creating complex data types.
      Learn about file handling in C to read from and write to files.

  Practice and explore real-world examples:
      Challenge yourself by solving coding exercises and problems related to C programming.
      Implement small projects or work on open-source projects to gain hands-on experience and apply your knowledge.
 */
