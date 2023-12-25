//Convert temprature from degree Farenheit to degree Celsius
#include<stdio.h>
int main()
{
double f,c;
printf("Enter temprature in farenheit:");
scanf("%lf",&f);
c=((f-32)*5)/9;
printf("Temprature in degree celsius: %lf \n",c);
return 0;
}
