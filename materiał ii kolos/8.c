#include <stdio.h>
void f(int n, int m, int t[][m]){
    int i,j;
for (i=0;i<2;++i)
    for (j=0;j<2;++j)
        printf("%d",t[i][j]);
}

int main () {
int t[2][2],i,j,n=2,m=2;
for (i=0;i<2;++i)
    for (j=0;j<2;++j)
        scanf("%d",&t[i][j]);
  f(n,m,t);
  return 0;

}
