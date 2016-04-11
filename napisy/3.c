#include <stdio.h>
#include <stdlib.h>

int f(int n, int m, double **tab){
	int i,j,w;
	double suma=0, min=0;
	
	for (j=0; j<m; ++j) { min+=tab[0][j]*tab[0][j]; }
	
	for (i=1; i<n; ++i) {
		suma=0;
		for (j=0; j<m;++j)
			suma+=tab[i][j]*tab[i][j];
		if (suma<=min) w=i;
	}
	
	return w;
}

int main () {
	int n,m,i,j;
	double **tab;
	scanf("%d%d",&n,&m);
	
	tab = malloc(n * sizeof(double *));
	for (i=0; i<n; ++i)
		tab[i]=malloc(m*sizeof(tab));
	for (i=0; i<n;++i)	
		for (j=0; j<m; ++j)
			scanf("%lf",&tab[i][j]);
			
	printf("%d",f(n,m,tab));
	return 0;
			
	
	
}
