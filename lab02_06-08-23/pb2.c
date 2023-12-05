#include<stdio.h>
int main()
{
double rad,pr,ar,pi=3.14;
printf("Enter radius of circle:");
scanf("%lf",&rad);
pr=2*pi*rad;
ar=pi*rad*rad;
printf("Perimeter of circle: %lf \n",pr);
printf("Area of circle: %lf \n",ar);
return 0;
}
