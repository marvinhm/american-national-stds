#include<stdio.h>

// write a program that copies input to output, and makes any amount of multi space a single space

main() {
  int c, nl = 0;
  int p = EOF;

  while((c = getchar()) != EOF) {
    if(c == '_') {
      putchar(c);
      while((c = getchar()) == '_');
      c = p;
    } else {
      putchar(c);
    }
  }
}