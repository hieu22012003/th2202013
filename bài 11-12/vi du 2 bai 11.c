#include <stdio.h>

int main(void) {
  int ary[10];
  int i, toal, high;
  for(i=0; i<10; i++)
    {
      printf("\n enter value: %d", i+1);
      scanf("%d", &ary[i]);
    }
  high = ary[0];
  for(i=1; i<10; i++)
    {
      if(ary[i]> high)
        high= ary[i];
    }
  printf("\n highest value entered was %d", high);
  for(i=0, toal=0; i<10; i++)
      toal = toal + ary[i];
  printf("\n the average of the elements of ary is %d", toal/i);
  return 0;
}
