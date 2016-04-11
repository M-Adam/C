#include <stdio.h>
#include <math.h>

int main()
{
int w;
double a,b,c,s,p;

printf("Obliczanie pola trojkata\n");
printf("Wpisz 1, by podac podstawe i wysokosc\n");
printf("Wpisz 2, by podac wszystkie boki\n");
scanf("%d",&w);

if (w==1) {
    printf("Podaj dlugosci podstawy i wysokosci\n");
    scanf("%lf%lf", &a, &b);
    p=a*b/2;
}
else {
    printf("podaj dlugosci wszystkich bokow\n");
    scanf("%lf%lf%lf", &a,&b,&c);
    s=(a+b+c)/2;
    p=sqrt(s*(s-a)*(s-b)*(s-c));
}
printf("Pole trojkata wynosi: %lf",p);
return 0;
}
