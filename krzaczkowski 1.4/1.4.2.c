#include <stdio.h>
//wypisanie 5 wielokrotnosci liczby m
int main() {
    int m,n,o;
    printf("Podaj 2 liczby calkowite dodatnie\n");
    scanf("%d%d", &m, &n);
    if ((m<=0)||(n<=0))
        {
           printf("\nBledne dane\n");
        }
        else
        {
            printf("\n\n%d pierwszych wielokrotnosci liczby %d to: \n",m,n);

           for (int i=1;i<=m;i++)
            {
                o=n*i;
                printf("%d\n",o);
            }
        }
    return 0;
}
