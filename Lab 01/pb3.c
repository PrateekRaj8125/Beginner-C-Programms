//convert temprature from degree celius to degree farenheit
#include<stdio.h>
int main()
{
double c,f;
printf("Enter temprature in celsius:");
scanf("%lf",&c);
f=((9*c)/5)+32;
printf("Temprature in degree Farenheit: %lf \n",f);
return 0;
}
