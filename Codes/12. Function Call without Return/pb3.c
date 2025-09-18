// Write a C program to calculate and return the factorial of a number using a function with return type, and print the result in main().
#include<stdio.h>
int fact(int);
void main()
{
int n,f;
printf("Enter a No.:");
scanf("%d",&n);
f=fact(n);
printf("Factorial of %d is:%d\n",n,f);
}
int fact(int k)
{
int ctr,p=1;
for(ctr=1;ctr<=k;ctr++)
p*=ctr;
return p;
}
