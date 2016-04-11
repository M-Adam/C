#include<stdio.h>

unsigned int suma(unsigned int a) { int s=0;
if (a<=0) return 0;
else

    return a%10+suma(a/10);
}



int main () { unsigned int a,b=1;
scanf("%d",&a);
printf("%d",suma(a));
return 0;
}
