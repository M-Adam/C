#include <stdio.h>

int f(int n) {
    int suma=0;
    for (i=n;i<=2*n;i++)
        if (i%2!=0) suma+=i;
    return suma;
}
