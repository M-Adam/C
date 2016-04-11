#include <stdio.h>
#include <math.h>

int main()
{
double a,b,c,d,e,f,x,y,w,wx,wy;

printf("Podaj wspolczynniki pierwszego rownania liniowego(a,b,e)\n");
scanf("%lf%lf%lf",&a,&b,&e);
printf("\nPierwsze rownanie ma postac: \n%lfx+%lfy=%lf\n \nPodaj wspolczynniki drugiego rownania\n",a,b,e);
scanf("%lf%lf%lf",&c,&d,&f);
printf("\nDrugie rownanie ma postac: \n%lfx+%lfy=%lf\n\n\n",b,c,f);
w=(a*d)-(b*c);
wx=(d*e)-(b*f);
wy=(a*f)-(e*c);


if (w!=0) {
    printf("Uklad oznaczony, posiada jedno rozwiazanie\n");
    x=wx/w;
    y=wy/w;
    printf("Rozwiazania rownania to:\n x= %lf \n y= %lf\n",x,y);
}
else {
    if ((wx!=0)||(wy!=0))
        printf("Uklad sprzeczny");
    else
        printf("Uklad nieoznaczony");
}

return 0;
}
