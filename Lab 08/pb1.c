//print result of a base with an exponent of users choice
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
