#include <stdio.h>

int mniejszawart1(int *a,int *b) {
return (*a<*b)? *a:*b;
}

int *mniejszawsk2(int *a,int *b) {
return (*a<*b)? a:b;
}

void zamiana(int *a, int *b) {

if (*b<*a) {
int c;
c=*a;
*a=*b;
*b=c; }
}


int main (){
int a,b,*p1,*p2;
p1=&a; p2=&b;
scanf("%d%d",&a,&b);

/* printf ("%d %d\n%p %p\n%d",a,b,&a,&b,*p1); */
printf("\n\n====\n\n");

printf("%d\n",mniejszawart1(p1,p2));
printf("%p\n",mniejszawsk2(p1,p2));
zamiana (p1,p2);
printf ("%d %d || %d %d\n",*p1,*p2,a,b);


return 0;
}
