#include <stdio.h>

void f(int a1,int a2,int b1, int b2, int n) {
 int i,j;


    for (i=a1;i<=a2;i++)
        for (j=b1;j<=b2;j++)
            if (i==j) printf ("%d ",i);


    }

int main () {
int a1,a2,b1,b2,n;
scanf ("%d%d%d%d%d",&a1,&a2,&b1,&b2,&n);
f(a1,a2,b1,b2,n);
return 0;
}
