#include <stdio.h>

main(){
  int c, nl;
  
  nl = 0;
  while ((c = getchar()) != EOF)
    if (c == '\n')
      ++nl;
  printf("\nLine Count: %d\n", nl);
}
