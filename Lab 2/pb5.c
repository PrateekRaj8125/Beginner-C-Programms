#include<stdio.h>
int main()
{
int n,d,s;
printf("Enter a 6-digit no.:");
scanf("%d",&n);
d=n/100000;
n=n%10;
s=d+n;
printf("Sum of digits: %d \n",s);
return 0;
}
