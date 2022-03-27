#include <stdio.h>

int main(void) {
  int i, n =0;
  int item;
  char x[10][12];
  char temp[12];
  
  printf("enter each string on a separate line \n\n");
  printf("type ‘END’ when over \n\n");
  do{
    printf("string %d: ", n+1);
    scanf("%s", x[n]);
  } while(strcmp(x[n++], "END"));
  n = n -1;
  for(item=0; item<n-2;++item)
    {
      for(i=item+1; i<n; ++i)
        {
          if(strcmp(x[item], x[i]>0))
          {
            strcpy(temp, x[item]);
            strcpy(x[item], x[i]);
            strcpy(x[i], temp);
          }
        }
    }
  printf("recorded list of strings : \n");
  for(i=0; i<n; ++i)
    {
      printf("\n strings %d is %s", i+1, x[i]);
    }
  return 0;
}
