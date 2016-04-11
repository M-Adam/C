#include <stdio.h>


void przepisz (int t[2][2]){
int i,j,pom;
for (i=0;i<1;++i){
    pom=t[i+1][i];
    t[i+1][i]=t[i][i];
    t[i][i]=pom;
}

for (i=0;i<2;++i)
    for (j=0;j<2;++j)
        printf("%d",t[i][j]);

}

int main () {
int t[2][2],i,j,n=2,m=2;
for (i=0;i<2;++i)
    for (j=0;j<2;++j)
        scanf("%d",&t[i][j]);
  przepisz(t);
  return 0;

}
