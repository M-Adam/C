#include <stdio.h>

int abs_diff(int *a, int *b) {
return (((*a-*b)>0) ? (*a-*b):-(*a-*b));
}

int *bezwzgledna(int *a, int *b) {
    int c=*a, d=*b;
    c= (c>0) ? c:-c;
    d= (d>0) ? d:-d;
    return (c>d) ? a:b;
}

int avg(int c, int d, float *result){
if (result==NULL)
    return 0;
else
    *result=((c+d)/2.0);
    return 1;
}


int main (){
int a,b,*p1,*p2;
float f,*result;
result=NULL;
p1=&a; p2=&b;
scanf("%d%d",&a,&b);

printf("%d\n",abs_diff(p1,p2));

printf("%d\n",*bezwzgledna(p1,p2));
printf("%d %d\n",*p1,*p2);

printf("\n\n%d\n\n",avg(a,b,result));


return 0;
}
