#include <stdio.h>
int f(unsigned int x, unsigned int y) {
if (y==x) return x;
if (x>y) return 2*f(x/y,y);
else return 2*f(x,y/x);
}

int main () {
int x,y;
scanf ("%d%d",&x,&y);
printf ("%d",f(x,y));
return 0; }
