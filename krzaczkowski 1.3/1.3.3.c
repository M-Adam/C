#include <stdio.h>

int main()
{
int a,b,c;

printf("Podaj trzy liczby calkowite\n");
scanf("%d%d%d",&a,&b,&c);

if (a>b) {
        if (a>c) {
            printf("Najwieksza liczba to %d", a);
        }
        else {
            printf("Najwieksza liczba to %d", c);
        }
}
else {
        if (b>c) {
        printf("Najwieksza liczba to %d", b);
        }
        else { printf("Najwieksza liczba to %d",c);}
}

return 0;
}
