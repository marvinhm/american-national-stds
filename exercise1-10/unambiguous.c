#include<stdio.h>

//Write a program to copy its input to it's output, replacing each tab by \t, each backspace by \b, and each backslash by \\.

main() {
  int c, p = EOF;

  while((c = getchar()) != EOF) {
    if(c == '\t') {
      putchar (92);
      putchar('t');
    } else if(c == '\b') {
      putchar (92);
      putchar('b');
    } else if(c == '\\') {
      putchar(92);
      putchar('\\');
    } else {
      putchar(c);
    }
  }
}