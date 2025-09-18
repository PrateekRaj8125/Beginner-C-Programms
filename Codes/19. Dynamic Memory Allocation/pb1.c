//Write a C program to declare two integer pointers, assign values using dynamic memory allocation, and calculate their sum.
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *p,*n,*s;
    p=(int *)malloc(sizeof(int));
    s=(int *)malloc(sizeof(int));
    n=(int *)malloc(sizeof(int));
    printf("Enter 1st No.:");
    scanf("%d",p);
    printf("Enter 2nd No.:");
    scanf("%d",n);
    *s=*p+*n;
    printf("Sum Of Two Nos.:%d\n",*s);
}