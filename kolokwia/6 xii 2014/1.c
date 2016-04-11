#include <stdio.h>

int main () {
float a,b,c,d,e,f,w,wx,wy,x,y;
printf ("podaj wspolrzedne 1 pkt \n");
scanf ("%f%f", &a,&b);
printf ("podaj wspolrzedne 2 pkt \n");
scanf ("%f%f", &c,&d);
printf ("podaj wspolrzedne 3 pkt \n");
scanf ("%f%f", &e,&f);


    w=a-c;
    wx=b-d;
    wy=a*d-b*c;
    x=wx/w;
    y=wy/w;

    if (f==x*e+y) printf("wszystkie punkty sa wspolliniowe \nrownanie prostej: y=%fx + %f", x,y);
    else printf ("\n Niewspoliniowe!");



return 0;
}
