#include <stdio.h>

void indexmin(int arr[], int size)
{
  int i, min;
  for(i=0; i<size; i++)
    {
      arr[1]=min;
      if (arr[i]<min)
      {
        min=arr[i];
      }
    } printf("min value : %d", min);
}
int main(void )
{
  int arr[3], i, b;
  for(i=0; i<3; i++)
    {
      printf("Enter number %d: ",i+1);
      scanf("%d",&arr[i]);
    }
  indexmin(arr,3);
  return 0;
}
