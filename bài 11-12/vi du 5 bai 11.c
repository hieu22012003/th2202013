#include <stdio.h>

int main(void) {
  int arr[2][3];
  int row, col;
  for(row=0; row<2; row++)
    {
      for(col=0; col<3; col++)
        {
          printf("\n enter a Number at [%d][%d]:",row,col);
          scanf("%d",&arr[row][col]);
        }
    }
  for(row=0; row<2; row++)
    {
      for(col=0; col<3; col++)
        {
          printf("\n the number at [%d][%d] is %d", row, col, arr[row][col]);
        }
    }
      
  return 0;
}