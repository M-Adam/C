#include <stdio.h>

int f(int n) {
int i;
for (i=n+1;;++i)
    if (g(i)==0) { printf("%6d",i); return 0; }


}

int g(int i) {
    int j;
    for (j=2;j*j<=i;++j)
        if (i%j==0) return 1;
    return 0;


    }




int main () {
int n;
scanf("%d",&n);

f(n);
return 0;
}

