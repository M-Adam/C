#include <stdio.h>

int main () {
    int m,n;
    printf("Podaj liczby calkowite m i n\n");
    scanf("%d%d",&m,&n);
    printf("\n\nWielokrotnosci liczby n mniejsze od m:\n");
    for (int i=n; i<m; i+=n){
        printf("%d\n",i); }
    return 0;
    }
