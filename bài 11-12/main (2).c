#include <stdio.h>

int main(void) {
  char kt[90];
  int i=0, na=0;
  printf("nhap van ban");
  scanf(" %c", &kt);
  while(kt[i] !='\0'){
    if(kt[i]=='a' || kt[i]=='e' || kt[i]=='s' || kt[i]=='o')
    na++;
    i++;
  }
  printf("so nguyen am %d", na);
  return 0;
}
