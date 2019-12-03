#include<stdio.h>

#define IN 1;
#define OUT 0;

main() {

  int c, nl, nw, nc, state;
  nl = nw = nc = 0;

  while((c = getchar()) != EOF) {
    ++nc;
    if (c == '\n') {
      ++nl;
    }
    if(c == ' ' || c == '\n' || c == '\t') {
      state = OUT;
    } else if(state == 0) {
      state = IN;
      ++nw;
    }
    printf("nl: %d, nc: %d, nw: %d", nl, nc, nw);
  }
}