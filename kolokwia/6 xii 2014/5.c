#include <stdio.h>

int f(int t[],int r) {
    int i,k=0;
    for (k=1,i=0; i+t[i]<r; k++)
        i+=t[i];
    return k;
}

int main () {
    int t[5],i,r=5;
    for (i=0; i<r; ++i)
        scanf ("%d",&t[i]);
    printf ("\nLiczba ruchow = %d\n",f(t,r));
    return 0;
}
