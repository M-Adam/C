#include <stdio.h>

int main() {
    int t[100],i;
    printf("Wprowadz liczby do tablicy\n");
    for (i=0;t[i]!=0;i++)
    {
        printf("%d wyraz = ",i+1);
        scanf ("%d",&t[i]);
        printf ("\n");
    }
    printf ("\n\n\nElementy:\n");
    for (;i>=0;i--)
    {
        printf("%d wyraz = %d\n",i+1,t[i]);
    }
return 0;
}
