#include <Stdio.h>

void f(char nap[]){
	int i;
	for(i=0; nap[i]; ++i) {
		if (nap[i]=='a') {
			if (i!=0) nap[i-1]='1'; nap[i]='2'; nap[i+1]='3';
		}
	}
	
	
	for (i=0; nap[i];++i)
	printf("%c",nap[i]);

	
	
	
}


int main(){
	char nap[10];
	fgets(nap,10,stdin);
	f(nap);
	return 0;
	
}
