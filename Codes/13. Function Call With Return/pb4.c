// Write a C program to print the Fibonacci series up to n terms using a function without return type.
#include<stdio.h>
void fibonacy(int);
void main()
{
int n;
printf("Enter no. of terms to be displayed:");
scanf("%d",&n);
fibonacy(n);
}
void fibonacy(int x)
{
int n1=0,n2=1,i,s;
printf("0,1,");
for(i=1;i<=(x-2);i++)
{
s=n1+n2;
n1=n2;
n2=s;
printf("%d,",s);
}
printf("\n");
}
