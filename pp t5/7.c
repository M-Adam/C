#include <stdio.h>


int max(int a, int b) {
    int c;
    c = a>b ? a:b;
    return c;
}

int min(int a, int b) {
    int c;
    c= a*(a<b)+b*(a>=b);
    return c;
}



int main () {
    int a,b;
    scanf ("%d%d",&a,&b);
    printf("Max: %d",max(a,b));
    printf("\nMin: %d",min(a,b));
    return 0;
    }
