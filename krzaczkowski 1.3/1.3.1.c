#include <stdio.h>

int main()
{
int a;
printf("Podaj liczbe calkowita\n");
scanf("%d",&a);
if (a<0) {
    a=a*-1;
}
printf("Wartosc bezwzgledna to %d", a);
return 0;
}
