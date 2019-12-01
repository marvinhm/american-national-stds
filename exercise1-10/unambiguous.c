#include<stdio.h>

//Write a program to copy its input to it's output, replacing each tab by \t, each backspace by \b, and each backslash by \\.

main() {
  int c, p = EOF;

  while((c = getchar()) != EOF) {
    if(c == '\t') {
      putchar ('\\');
      putchar('t');
      c = p;
    } else if(c == '\b') {
      putchar ('\\');
      putchar('b');
      c = p;
    } else if(c == '\\') {
      putchar('\\');
      putchar('\\');
      c = p;
    } else {
      putchar(c);
      c = p;
    }
  }
}