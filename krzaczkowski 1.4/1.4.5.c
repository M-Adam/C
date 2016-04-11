#include <stdio.h>


int main() {
    int n,s=0;
    printf("Podaj liczbe calkowita dodatnia\n");
    scanf("%d", &n);
    if (n<0)
        {
           printf("\nBledne dane\n");
        }
        else
        {
           for (int i=1; i<=n; i++)
            {
               s+=i*i;
            }
        printf("Suma kwadratow liczb od 0 do %d to: %d", n, s );
        }
    return 0;
}
