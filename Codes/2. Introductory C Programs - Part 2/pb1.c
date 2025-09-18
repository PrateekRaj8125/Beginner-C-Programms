//Write a C program to find and print the sum of digits of a 3-digit number entered by the user.
#include<stdio.h>
int main()
{
int n,d1,d2,d3,s;
printf("Enter a 3-digit number:");
scanf("%d",&n);
d1=n%10;
n=n/10;
d2=n%10;
n=n/10;
d3=n%10;
s=d1+d2+d3;
printf("Sum of digits: %d \n",s);
return 0;
}
