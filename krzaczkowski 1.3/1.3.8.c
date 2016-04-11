#include <stdio.h>

int main() {
double a,b,p;
int w;
printf("Oblicz pole: \n1. Kwadratu;\n2.Prostokata;\n3.Trojkata\n\n");
scanf("%d",&w);

switch (w) {
    case 1: printf("Podaj bok kwadratu: \n");
            scanf("%lf",&a);
            p=a*a;
            break;
    case 2: printf("Podaj boki prostokata: \n");
            scanf("%lf%lf", &a,&b);
            p=a*b;
            break;
    case 3: printf("Podaj podstawe i wysokosc trojkata: \n");
            scanf("%lf%lf", &a,&b);
            p=a*b/2;
}

printf("\n\nPole wybranej figury = %lf\n", p);


return 0;
}
