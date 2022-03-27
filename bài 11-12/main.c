#include <stdio.h>

int main(void) {
  int arr[5];
  int i, max, min;
  for (i=0; i<5; i++){
    printf("enter the data: %d: ", i+1);
    scanf("%d", &arr[i]);
    if(i==0){
      max = arr[i];
      min = arr[i];
    }else{
      if(max<arr[i])
        max=arr[i];
      if (min>arr[i])
        min=arr[i];
    }
  }
  printf("%d is max \n", max);
  printf("%d is min", min);
  return 0;
}