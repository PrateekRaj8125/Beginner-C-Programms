//print the factorial of an entered no.
#include<stdio.h>
int main()
{
int n,ctr;
double f=1.0;
printf("Enter a no.:");
scanf("%d",&n);
for(ctr=n;ctr>=1;ctr--)
{
f=f*ctr;
}
printf("Factorial of entered no.:%lf\n",f);
return 0;
}
