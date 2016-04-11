#include <stdio.h>
#include <math.h>

int main()
{
    double a,b,c,d,x1,x2;
    printf("Podaj wspolczynniki rownania kwadratowego\n");
    scanf("%lf%lf%lf",&a,&b,&c);
    d=b*b-4*a*c;
    if (d<0) {
        printf("\nBrak rozwiazan\n");  }
    else {
        if (d==0) {
            x1=(b+sqrt(d))/2*a;
            printf("Jedno rozwiazanie: \nx = %lf",x1);
            }
            else {
                x1=(b-sqrt(d))/2*a;
                x2=(b+sqrt(d))/2*a;
                printf("Rozwiazania ukladu rownan:\nx1 = %lf\nx2 = %lf",x1,x2);
            }

}
return 0;
}
