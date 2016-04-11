#include <stdio.h>
//wielokrotnosci liczby n wiekszych od m mniejszych od k
int main() {
	int m, n, k, o;
	printf("Podaj 3 liczby calkowite dodatnie\n");
	scanf("%d%d%d", &n, &m, &k);
	if ((m <= 0) || (n <= 0) || (k <= 0))
	{
		printf("\nBledne dane\n");
	}
	else
	{
		printf("Wielokrotnosci liczby %d wieksze od %d a mniejsze od %d to: \n", n, m, k);
		for (int i = 1; n*i<k; i++)
		{

			if (n*i>m)
				printf("%d\n", n*i);

		}

	}
	return 0;
}
