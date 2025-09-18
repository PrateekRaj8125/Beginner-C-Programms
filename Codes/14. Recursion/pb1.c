// Write a C program to find the sum of first n natural numbers using recursion.
#include<stdio.h>
int sum(int);
void main()
{
    int num,r;
    printf("Enter total no. of natural no.:");
    scanf("%d",&num);
    r=sum(num);
    printf("Sum of natural nos.:%d\n",r);
}
int sum(int n)
{
    if(n!=0)
    return (n+sum(n-1));
    else
    return n;
}