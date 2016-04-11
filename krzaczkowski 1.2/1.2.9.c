#include <stdio.h>
#include <math.h>

int main()
{
float a;
printf("Podaj dodatnia liczbe wymierna\n");
scanf("%f",&a);
if (a>=0)
{
        printf("\nPierwiastek z tej liczby to %f\n",sqrt(a));
}
else
    printf("Bledne dane");
return 0;
}
