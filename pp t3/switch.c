#include <stdio.h>
int main () {
int a,b;
printf("Podaj 2 liczby \n");
scanf("%d%d",&a,&b);

switch(a) {
  case 0:  return 1;
                break;
  case 1:  printf("%d",10*b);
                break;
  case 2:  printf("%d",b%10);
                break;
  default:      printf("%d",b);
}
return 0; }
