//WAP to swap two numbers using call by reference.
#include<stdio.h>
void swap(int *,int *);
void main()
{
    int n1,n2;
    printf("Enter 1st No.:");
    scanf("%d",&n1);
    printf("Enter 2nd No.:");
    scanf("%d",&n2);
    printf("Original Values:%d,%d",n1,n2);
    swap(&n1,&n2);
    printf("\nSwapped Values:%d,%d\n",n1,n2);
}
void swap(int *no1,int *no2)
{
    int n;
    n=*no1;
    *no1=*no2;
    *no2=n;
}