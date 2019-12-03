#include<stdio.h>

main() {
  int character;

  while((character = getchar()) != EOF) {
    
    if(character == ' ' || character == '\t') {
      putchar('\n');  
    } else {
      putchar(character);
    }
  }
}