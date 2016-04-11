#include <stdio.h>

int main() {
    int t[5],i;
    printf("Wprowadz 5 liczb do tablicy\n");
    for (i=0;i<=4;i++)
    {
        printf("%d wyraz = ",i+1);
        scanf ("%d",&t[i]);
        printf ("\n");
    }
    printf ("\n\n\nElementy:\n");
    for (i=0;i<=4;i++)
    {
        printf("%d wyraz = %d\n",i+1,t[i]);
    }
return 0;
}
