//Write a C program to compute the sum of all elements in an array using pointers.
#include<stdio.h>
void main()
{
    int n;
    printf("Enter no. of terms to be entered:");
    scanf("%d",&n);
    int no[n],ctr,*p;
    printf("Enter the %d Values:\n",n);
    for(ctr=0;ctr<n;ctr++)
        scanf("%d",&no[ctr]);
    p=no;
    int sum=0;
    for(ctr=0;ctr<n;ctr++)
        sum+=*(p+ctr);
    printf("Sum of %d Values:%d\n",n,sum);
}