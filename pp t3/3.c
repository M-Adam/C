#include <stdio.h>

int main()
{
	int i, n;
	printf("Podaj n\n");
	scanf("%d", &n);
    printf("\nCzynniki pierwsze liczby %d: \n",n);
for(i = 2; 1 < n; )
{
   if(n%i==0)
    {
        printf("%d ",i);
        n/=i;
    }
   else
    i++;

}
return 0;
}
