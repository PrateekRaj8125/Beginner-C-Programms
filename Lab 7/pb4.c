#include<stdio.h>
int main()
{
int n,ctr,sum=0;
printf("Enter a no.:");
scanf("%d",&n);
for(ctr=1;ctr<n;ctr++)
{
if(n%ctr==0)
sum=sum+ctr;
}
if(sum==n)
printf("%d is a perfect no.\n",n);
else
printf("%d is not a perfect no.\n",n);
return 0;
}
