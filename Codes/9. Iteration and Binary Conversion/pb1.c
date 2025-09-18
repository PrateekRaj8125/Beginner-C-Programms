// Write a C program to enter a 3-digit number and print its reverse. Repeat this process 10 times.
#include<stdio.h>
int main()
{
int n,ctr;
for(ctr=1;ctr<=10;ctr++)
{
printf("Enter a no.:");
scanf("%d",&n);
if(n>=100&&n<1000)
{
int d,nn=0,dn;
dn=n;
while(dn>0)
{
d=dn%10;
nn=(nn*10)+d;
dn=dn/10;
}
printf("Reverse of %d is %d\n",n,nn);
}
}
return 0;
}
