#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
     int p, i;

     printf("Podaj liczbe: ");
     scanf("%d", &p);

   /* if (p<2)  {
    printf("Podana liczba nie jest liczba pierwsza\n");
    return 1;  }  */

     for(i = 2; i*i < p; i++)
     {
          if(p % i == 0)
          {
               printf("%d  nie jest liczba pierwsza.\n", p);

                return 1;
          }
     }

     printf("%d jest liczba pierwsza.\n", p);
     return 0;
}

