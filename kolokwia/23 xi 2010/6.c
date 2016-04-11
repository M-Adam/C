#include <stdio.h>
void f(int tab1[],int tab2[],int tab3[],int n) {
    int i,j;
    for (i=0,j=0;i<2*n;i+=2,++j) {
        tab2[j]=tab1[i];
        tab3[j]=tab1[i+1]; }
    for (i=0;i<n;++i)
        printf ("%d ",tab2[i]);

    printf ("\n");
    for (i=0;i<n;++i)
        printf ("%d ",tab3[i]);

}

int main () {
int tab1[10],tab2[5],tab3[5],n=5,i;
for (i=0;i<2*n;++i)
    scanf ("%d",&tab1[i]);
f(tab1,tab2,tab3,n);
return 0;
}
