//Write a C program to calculate and print the perimeter and area of a circle when the radius is entered by the user.
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
