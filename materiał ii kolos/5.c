#include <stdio.h>
#include <stdlib.h>

int main (){
int n,i,*t;
scanf("%d",&n);
t=malloc(n*sizeof(int));

for (i=0;i<n;++i)
    scanf("%d",&t[i]);

for (i=0;i<n;++i)
    printf("%d ",t[i]);

return 0;

}
