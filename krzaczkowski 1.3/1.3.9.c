#include <stdio.h>
#include <math.h>

int main() {
int w;
double a,b;
printf("Kalkulator\n\nWybierz operacje arytmetyczna:\n1.Dodawanie\n2.Odejmowanie\n3.Mnozenie\n4.Dzielenie\n5.Pierwiastek\n6.Procent\n");
scanf("%d",&w);
switch (w) {
    case 1: printf("Podaj dwie liczby do zsumowania\n");
            scanf("%lf%lf", &a,&b);
            printf("Suma: %lf\n",a+b);
            break;
    case 2: printf("Podaj dwie liczby do odjecia od siebie\n");
            scanf("%lf%lf", &a,&b);
            printf("Roznica: %lf\n",a-b);
            break;
    case 3: printf("Podaj dwie liczby do wymnozenia\n");
            scanf("%lf%lf", &a,&b);
            printf("Iloczyn: %lf\n",a*b);
            break;
    case 4: printf("Podaj dwie liczby do podzielenia\n");
            scanf("%lf%lf", &a,&b);
            printf("Iloraz: %lf\n",a/b);
            break;
    case 5: printf("Podaj liczbe do spierwiastkowania\n");
            scanf("%lf", &a);
            printf("Pierwiastek: %lf\n",sqrt(a));
            break;
    case 6: printf("Oblicz procent z liczby\n");
            scanf("%lf%lf", &a,&b);
            printf("Wynik: %lf%%\n",a*b/100);

    }
return 0;
}
