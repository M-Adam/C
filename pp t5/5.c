#include <stdio.h>
#include <math.h>

float odl(float a, float b, float c, float d) {
    float wynik;
    wynik=sqrt((c-a)*(c-a)+(d-b)*(d-b));
    return wynik;
}

int main () {
    float a,b,c,d;
    scanf ("%f%f%f%f",&a,&b,&c,&d);
    printf("%f",odl(a,b,c,d));
    return 0;
    }
