#include <stdio.h>

void f(unsigned int n, unsigned int m) {
int i;

for (i=n-1;i>0;--i) {
    if (i%m==0) printf ("%d ",i);
}
}

int main () {
unsigned int n,m;
scanf ("%u%u",&n,&m);
f(n,m);
return 0;
}
