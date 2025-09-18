// Write a C program to calculate and print the result of a base raised to an exponent entered by the user.
#include<stdio.h>
int main()
{
double y=1.0,x,n;
printf("Enter base:");
scanf("%lf",&x);
printf("Enter Exponent:");
scanf("%lf",&n);
for(int ctr=1;ctr<=n;ctr++)
y*=x;
printf("y=%lf\n",y);
return 0;
}
