#include <stdio.h>
#include <math.h>

int check(int num);
int main(void ){
  int num[100], i, n;
  printf("nhap n");
  scanf("%d",&n);
  for(i=0; i<n; i++){
    printf ("nhap so %d: ", i+1);
    scanf("%d", &num[i]);
  }
  for (i=0; i<n; i++){
    int x;
    x = check(num[i]);
    if(x==0){
      printf ("%d la boi cua 50\n", num[i]);
    }
    if(x==1){
      printf("khong la boi 50\n");
    }
  }
}
int check(int num)
{
  if(num%50==0){
    return 0;
  }else{
   return 1; 
  }
}