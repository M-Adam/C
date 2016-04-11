#include <stdio.h>
#include <math.h>

float pole(float a, float b, float c, float d, float e, float f) {
    float j,k,l,p,wynik;
    j=sqrt((c-a)*(c-a)+(d-b)*(d-b));
    k=sqrt((e-c)*(e-c)+(f-d)*(f-d));
    l=sqrt((e-a)*(e-a)+(f-b)*(f-b));
    p=0.5*(j+k+l);
    wynik=sqrt(p*(p-j)*(p-k)*(p-l));

    return wynik;
}

int main () {
    float a,b,c,d,e,f;
    scanf ("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
    printf("%f",pole(a,b,c,d,e,f));
    return 0;
    }
