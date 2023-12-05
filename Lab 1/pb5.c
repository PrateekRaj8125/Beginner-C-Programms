#include<stdio.h>
int main()
{
double p,r,t,si;
printf("Enter Principal Amount:");
scanf("%lf",&p);
printf("Enter Rate Of Interest Per Annum:");
scanf("%lf",&r);
printf("Enter Time in Years:");
scanf("%lf",&t);
si=(p*r*t)/100;
printf("Simple Interest: %lf \n",si);
return 0;
}
