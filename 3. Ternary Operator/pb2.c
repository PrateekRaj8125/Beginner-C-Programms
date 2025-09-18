// Write a C program to check whether an entered number is even or odd using the ternary operator.
#include<stdio.h>
int main()
{
int n;
printf("Enter a no.:");
scanf("%d",&n);
(n%2==0)?printf("No. %d is even \n",n):printf("No. %d is odd \n",n);
return 0;
}
