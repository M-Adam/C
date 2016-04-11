#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, N, M;
    double **t;
    scanf("%d%d",&N,&M);

    t = malloc(N * sizeof(double *));

    for ( i = 0; i < N; i++ )
        t[i] = malloc( M * sizeof( double ) );

    for (i=0;i<N;++i)
        for (j=0;j<M;++j)
            scanf("%lf",&t[i][j]);

    for (i=0;i<N;++i) {
        printf("\n");
        for (j=0;j<M;++j)
            printf("%.2lf ",t[i][j]);
    }

    return 0;
}
