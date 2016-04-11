#include <stdio.h>

int main()
{
	int i, j, n, p;
	printf("podaj n");
	scanf("%d", &n);

for(i = 2; i <= n; ++i)
{
    p = 1;

    for(j = 2; j < i; ++j)
    {
        if(i % j == 0)
        {
            p = 0;
            break;
        }
    }


		if(p)
			printf("%d\n", i);



}
return 0;
}
