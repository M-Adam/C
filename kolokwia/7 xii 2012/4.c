#include <stdio.h>
int f(int n) {
    if ((n<=0)&&(n==10)) return 0;
    else return 2*f(n-1) + f(n-2) + 5;
}
