#include <stdio.h>
int main() {
    int a,b,c;
    printf("Podaj 2 liczby\n");
    scanf("%d%d",&a,&b);
    a= a<0 ? -a :a ;
    b= b<0 ? -b :b ;
    c= a>b ? a:b;

    printf ("\nMax wartosci bezwzglednych:\n%d",c);
    return 0;
}









