#include <stdio.h>

int main(void) {
  char alpha[25];
  int i, j;
  for(i=65,j=0; i<91; i++, j++)
    {
      alpha[j] = i;
      printf("the character now assigned is %c \n", alpha[j]);
    }
  getchar();
  return 0;
}
