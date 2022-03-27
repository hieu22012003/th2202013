#include <stdio.h>

int main(void) {
  int num[5];
  int i;
  num[0] =10;
  num[1] =70;
  num[2] =50;
  num[3] =40;
  num[4] =50;
  for(i=0; i<5; i++)
    printf("\n number at [%d] is %d", i, num[i]);
  return 0;
}