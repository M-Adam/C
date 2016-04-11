#include <stdio.h>
//wypisanie 5 wielokrotnosci liczby m
int main() {
    int m;
    printf("Podaj liczbe calkowita dodatnia\n");
    scanf("%d", &m);
    if (m<=0)
        {
           printf("\nBledne dane\n");
        }
        else
        {
           for (int i=1;i<=5;i++)
            {
                printf("%d\n",m);
                m+=m;
            }

        }
    return 0;
    }
