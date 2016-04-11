#include <stdio.h>
#include <stdlib.h>

void suma (double **tab, double **tabb, int N) {
double **tabbb;
int i,j;

tabbb = malloc(N * sizeof(double *));
for ( i = 0; i < N; i++ )
    tabbb[i] = malloc( N * sizeof( double ) );

    for (i=0;i<N;++i)
        for (j=0;j<N;++j)
            tabbb[i][j]=tabb[i][j]+tab[i][j];

for (i=0;i<N;++i)
        for (j=0;j<N;++j)
            printf("%lf",tabbb[i][j]);
}

int main()
{
    int i, j, N;
    double **tab,**tabb;
    scanf("%d",&N);

    tab = malloc(N * sizeof(double *));
    for ( i = 0; i < N; i++ )
        tab[i] = malloc( N * sizeof( double ) );
    for (i=0;i<N;++i)
        for (j=0;j<N;++j)
            scanf("%lf",&tab[i][j]);

    tabb = malloc(N * sizeof(double *));
    for ( i = 0; i < N; i++ )
        tabb[i] = malloc( N * sizeof( double ) );
    for (i=0;i<N;++i)
        for (j=0;j<N;++j)
            scanf("%lf",&tabb[i][j]);

suma (tab, tabb, N);


    return 0;
}
