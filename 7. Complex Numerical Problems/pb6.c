// Write a C program to check whether an entered number is a strong number or not.
#include<stdio.h>
int main()
{
int n,dn,d,ctr,s=0;
printf("Enter a no.:");
scanf("%d",&n);
dn=n;
while(dn>0)
{
d=dn%10;
int f=1;
for(ctr=d;ctr>=1;ctr--)
{
f=f*ctr;
}
s=s+f;
dn=dn/10;
}
if(s==n)
printf("%d is a strong no.\n",n);
else
printf("%d is not a strong no.\n",n);
return 0;
}
