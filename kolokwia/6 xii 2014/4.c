#include <stdio.h>
int f(float t1[],float t2[],int r, float a, float b) {
    int i,j;
    for (j=0,i=0; i<r; i++) {
        if ((t1[i]>=a)&&(t1[i]<=b)) {
            t2[j]=t1[i];
            j++;  } }
    printf ("\n Druga tablica: \n");
    for (i=0;i<j;i++)
        printf("%f ",t2[i]);
    return j;
}

int main () {
    float t1[5],t2[5],a,b;
    int r=5,i;
    for  (i=0;i<r;i++)
        scanf("%f",&t1[i]);
    printf ("\n Przedzial od a do b \n");
    scanf ("%f%f",&a,&b);
    printf ("\n skopiowanych elementow: %d\n",f(t1,t2,r,a,b));
    return 0;

    }
