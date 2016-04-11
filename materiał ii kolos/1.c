#include <stdio.h>

int mniejsze1(int *a, int *b) {
return (*a<*b) ? *a:*b;
}

int *mniejsze2(int *a, int *b) {
return (*a<*b) ? a:b;
}

void zamiana(int *a, int *b) {
int c;
c=*a;
*a=*b;
*b=c;
}

int main() {
int a,b,*c,*d;
scanf("%d%d",&a,&b);
c=&a; d=&b;

printf("%d\n",mniejsze1(c,d));
printf("%d",*mniejsze2(c,d));
zamiana (c,d);
printf("\n\n==\n%d %d\n==\n\n",a,b);

return 0;
}
