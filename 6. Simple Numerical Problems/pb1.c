// Write a C program to print all even numbers from 1 to 50.
#include<stdio.h>
int main()
{
int n=1;
printf("Even nos.:");
while(n<=50)
{
if(n%2==0)
printf("%d,",n);
n++;
}
printf("\n");
return 0;
}
