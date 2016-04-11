#include <stdio.h>
int f(int t[], int n, int p) {
    int i,d=0,max=0;
    for (i=0; i<n; ++i) {
        d=0;
        while (t[i]!=p) {
            if (t[i]>p) t[i]-=1;
            else t[i]+=1;
            ++d; }
     max= max>d ? max:d;
    }
    return max;
}

int main () {
    int t[5],n=5,p,i;
    for (i=0;i<n;++i)
        scanf ("%d",&t[i]);
    printf ("\np\n");
    scanf ("%d",&p);
    printf ("przebudowa zajela %d dni", f(t,n,p));
    return 0;
}
