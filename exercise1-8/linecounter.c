#include <stdio.h>
// count number of spaces, tabs and newlines
main() {
  int nc = 0;
  char c;

  c = getchar();

  while( c != EOF ) {
    if(c == '\n' || c == ' ' || c == '\t') {
      nc++;
      printf("The number of each breaks is %d", nc);
      c = getchar();
    } else {
      printf("You entered something different!");
      c = getchar();
    }
  }
}