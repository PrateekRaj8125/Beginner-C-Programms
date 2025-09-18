// Write a C program to calculate and print the factorial of a number using a function without return type.
#include<stdio.h>
void fact(int);
void main()
{
int n;
printf("Enter a no.:");
scanf("%d",&n);
fact(n);
}
void fact(int k)
{
int ctr,f=1;
for(ctr=1;ctr<=k;ctr++)
f*=ctr;
printf("Factorial of %d is:%d\n",k,f);
}
