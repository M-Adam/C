#include <stdio.h>
void f(int t[], int r) {
int i,j,sumaprzed=0,sumapo=0,sredprzed=0,sredpo=0;

for (i=0; t[i]!=0; i++)
    sumaprzed+=t[i];

sredprzed=sumaprzed/(i);
i++;

for (j=0;i<r;i++) {
    sumapo+=t[i];
    j++; }

sredpo=sumapo/(j);

printf ("sredprzed = %d \n sredpo = %d", sredprzed,sredpo);
}







int main () {
int t[7], r=7, i;
for (i=0;i<r;i++)
    {
        scanf ("%d", &t[i]);
    }
    f(t,r);
    return 0;
}


