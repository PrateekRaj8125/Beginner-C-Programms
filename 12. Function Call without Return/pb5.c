// Write a C program to pass an array to a function and calculate the sum of its elements.
#include<stdio.h>
void sum(int[],int);
void main()
{
    int n;
    printf("Enter no. of terms to be entered:");
    scanf("%d",&n);
    int a[n],ctr;
    printf("Enter %d values:\n",n);
    for(ctr=0;ctr<n;ctr++)
    scanf("%d",&a[ctr]);
    sum(a,n);
}
void sum(int a[],int n)
{
    int s=0,ctr;
    for(ctr=0;ctr<n;ctr++)
    s+=a[ctr];
    printf("Sum of nos. entered:%d\n",s);
}
