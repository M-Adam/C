#include <stdio.h>
//wielokrotnosci liczby n wiekszych od m mniejszych od k
int main() {
    int n,s=1;
    printf("Podaj liczbe calkowita dodatnia\n");
    scanf("%d", &n);
    if (n<0)
        {
           printf("\nBledne dane\n");
        }
        else
        {
           for (int i=2; i<=n; i++)
            {
                s*=i;
            }
        printf("%d! to %d\n", n,s);
        }
    return 0;
}
