#include <stdio.h>
int main () {
float a,b;

scanf ("%f%f",&a,&b);

if (a>0) {
    if (b>0) printf ("1,2,3");
    if (b<0) printf ("1,3,4");
    if (b==0) printf("1,3");
    return 1; }
if (a<0) {
    if (b>0) printf ("1,2,4");
    if (b<0) printf ("2,3,4");
    if (b==0) printf ("2,4");
    return 2; }
if (a==0) {
    if (b>0) printf ("1,2");
    if (b<0) printf ("3,4");
    return 3;
}

return 0;

}
