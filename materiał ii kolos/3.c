#include <stdio.h>

void przepis(int n, int *w){
*w=n;
}

int main (){
int a,b,*p1,*p2,n;
p1=&a; p2=&b;

scanf("%d%d",&a,&b);

scanf("%d",&n);
przepis (n,p1);
printf("%d %d",*p1,a);

return 0;


}
