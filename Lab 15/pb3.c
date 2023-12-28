//calculate sum of digits using function
#include<stdio.h>
int dsum(int);
void main()
{
int n,sd;
printf("Enter a no.:");
scanf("%d",&n);
sd=dsum(n);
printf("Sum of digits of a given no.:%d\n",sd);
}
int dsum(int x)
{
int s=0,d;
while(x>0)
{
d=x%10;
s+=d;
x/=10;
}
return s;
}
