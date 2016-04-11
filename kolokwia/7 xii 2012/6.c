#include <stdio.h>

void f(int t1[], int t2[], int t3[], int n) {
    int i,j,k;
    for (i=0,k=0,j=0; i<n;i++)
        {
            if (t1[i]%2==0) { t3[j]=t1[i]; j++; }
            else { t2[k]=t1[i]; k++;}
        }
}
