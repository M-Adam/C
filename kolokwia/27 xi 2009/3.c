#include <stdio.h>

int pierwsza(int p) {
    int i;
    for (i=2;i<=p;++i)
        if (p%i==0) return 1;
    return 0; }

int f(int n) {
 int i;
for (i=n+1;;++i)
    if (pierwsza(i)==0) return i;
}


int main () {
int n;
scanf ("%d",&n);
printf ("%d",f(n));
return 0;


}
