#include <stdio.h>
#include <math.h>

float getarea (float a, float b, float c);
void main(){
  float a, b, c, s;
  printf("enter number");
  scanf("%f%f%f", &a, &b, &c); 
  if((a+b)>c &&(a+c)>b&&(b+c)>a)
  {
    s=getarea(a,b,c);
    printf("S: %2f\n", s);
  }
  else{
    printf("erros\n");
  }
}
float getarea (float a, float b, float c)
{
  float p, s;
  p=(a+b+c)/2;
  s = sqrt(p*(p-a)*(p-b)*(p-c));
  return p;
}