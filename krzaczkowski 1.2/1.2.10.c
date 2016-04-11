#include <stdio.h>
#include <math.h>

int main()
{
float a;
printf("Podaj liczbe wymierna\n");
scanf("%f",&a);
printf("Wartosc bezwzgledna %f to: %f", a, fabs(a));
return 0;
}
