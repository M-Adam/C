#include <stdio.h>

int main (){
	int a,b,n;
	printf("\n1. Dodawanie\n2.Mnozenie\n\n");
	scanf("%d",&n);
	printf("Podaj dwie liczby.\nA = "); 
	scanf("%d",&a);
	printf("\nB = ");
	scanf("%d",&b);
	printf ("Wynik = ");
	switch (n) {
		case 1: printf ("%d",a+b);
		case 2: printf ("%d",a*b);
	}
	return 0; 
	
	
	
}
