#include <stdio.h>

int f(int n,int k) {
    if (k==0) return n;
    if (k%2==0) return f(n/2,k-1);
    if (k%2!=0) return f(3*n+1,k-1);
}

int main () {
    int n,k;
    scanf("%d%d",&n,&k);
    printf ("%d . wyraz ciagu = %d",k,f(n,k));
    return 0;
}
