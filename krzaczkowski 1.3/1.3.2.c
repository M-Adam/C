#include <stdio.h>

int main()
{
int a,b;

printf("Podaj dwie liczby calkowite\n");
scanf("%d%d",&a,&b);

if (a>b) {
        printf("Wieksza liczba to %d", a);
}
else {
        printf("Wartosc bezwzgledna to %d", b);
}

return 0;
}
