#include <stdio.h>

int main() {
    int i,j,n,m;
    printf("Podaj wymiary tablicy\n");
    scanf("%d%d",&n,&m);
    printf("tabliczka mnozenia %dx%d: \n",n,m);
    for(i=1;i<=n;i++) {
        for (j=1;j<=m;j++) {
            printf("%3d", i*j);
        }
        printf("\n");
    }
    return 0;
}
