// Write a C program to swap two numbers using a function without return type and display the swapped values.
#include<stdio.h>
void swap(int,int);
void swap(int a1,int b1)
{
int n;
n=a1;
a1=b1;
b1=n;
printf("Swapped Values: First No.:%d ,Second No.:%d\n",a1,b1);
}
int main()
{
int a,b;
printf("Enter First No.:");
scanf("%d",&a);
printf("Enter Second No.:");
scanf("%d",&b);
printf("Originals: First No.:%d ,Second No.:%d\n",a,b);
swap(a,b);
return 0;
}
