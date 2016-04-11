#include <stdio.h>
#include <stdlib.h>
int f(char *nap1, char *nap2) {
	int i;
	for (i=0; nap1[i]; ++i){
		if (nap1[i]!=nap2[i]) return 0;
		
		
	}
	return 1;
	
	
}

int main (){
	char nap1[10], nap2[10];
	
	fgets (nap1,10,stdin);
	fgets (nap2,10,stdin);
	
	
	
	printf ("%d",f(nap1, nap2));
	return 0;
	
	
}
