#include<stdio.h>
int main()
{
int n,i,ctr=0;
printf("Enter a no.:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
ctr++;
}
if(ctr==2)
printf("%d is a prime no.\n",n);
else
printf("%d is not a prime no.\n",n);
return 0;
}
