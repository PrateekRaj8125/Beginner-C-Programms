#include<stdio.h>
void dsum(int);
void main()
{
int n;
printf("Enter a No.:");
scanf("%d",&n);
dsum(n);
}
void dsum(int k)
{
int dn=k,d,sum=0;
while(dn>0)
{
d=dn%10;
sum+=d;
dn/=10;
}
printf("Sum of Digits:%d\n",sum);
}
