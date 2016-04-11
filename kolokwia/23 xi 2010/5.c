#include<stdio.h>
    void f(int tab[], int n) {
    int i,j=0,k=0,sumad=0,sumau=0;
    for (i=0;i<n;++i) {
        if (tab[i]>=0)  { sumad+=tab[i]; ++j; }
        else { sumau+=tab[i]; ++k; }
    }
    printf ("%d",sumad/j);
    printf ("%d",sumau/k);
}

int main () {
int tab[5], n=5,i;
for (i=0;i<n;++i)
    scanf("%d",&tab[i]);
f(tab,n)    ;

}
