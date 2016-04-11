#include <stdio.h>

int f(int n) {
int i;

for (i=n;;--i) {
    if (i*i*i<=n) return i;
}
}

int main () {
int n;
scanf ("%d",&n);
printf("%d",f(n));
return 0;
}
