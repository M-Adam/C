#include <stdio.h>

int main () {
    int n,k;
    scanf("%d%d",&n,&k);

    while (k!=0) {
        if (k%2==0) n=n/2;
        if (k%2!=0) n=3*n+1;
        k--;
    }

    printf ("wynik = %d",n);
    return 0;
}
