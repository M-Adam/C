#include <stdio.h>
int main() {
    int a,b,c;
    printf("Podaj 2 liczby\n");
    scanf("%d%d",&a,&b);
    c= a>b ? a:b;
    c= c<0 ? -c :c ;

    printf ("\nWartosc bezwzgledna Max:\n%d",c);
    return 0;
}









