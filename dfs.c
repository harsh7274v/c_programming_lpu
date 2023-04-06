#include<stdio.h>
void main ()
{double radius,area=0.0;
    double *pradius=&radius,*pcircum=&circum;
    printf("\n enter the radius of the circle");
    scanf("%lf",pradius);
    *pcircum=2*3.14*(*pradius);
    printf("\n the circumference of the circle with radius %.2lf=%.2lf",*pradius,*pcircum);
}
