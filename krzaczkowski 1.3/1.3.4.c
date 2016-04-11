#include <stdio.h>

int main()
{
int a,b,a1,b1;

printf("Podaj dwie liczby calkowite\n");
scanf("%d%d",&a,&b);


if (a<0) a=a*-1;
if (b<0) b=b*-1;
if (a>b) printf("Wieksza wartosc bezwzgledna to: %d",a);
else printf("Wieksza wartosc bezwzgledna to: %d",b);



return 0;
}
