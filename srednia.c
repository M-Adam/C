#include <stdio.h>

float f(int t[],int r) {
int i,suma=0;

for(i=0;i<r;++i)
    suma+=t[i];

return (float)suma/i;



}


int main () {
int t[3],r=3,i;
for (i=0;i<r;++i) scanf ("%d",&t[i]);
printf ("%5.2f",f(t,r));
return 0;
}
