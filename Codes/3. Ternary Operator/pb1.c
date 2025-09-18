// Write a C program to find the smallest number among two entered numbers using the ternary operator.
#include<stdio.h>
int main()
{
int n1,n2,ln;
printf("Enter 1st no.:");
scanf("%d",&n1);
printf("Enter 2nd no.:");
scanf("%d",&n2);
ln=(n1<n2)?n1:n2;
printf("Smallest no.: %d \n",ln);
return 0;
}
