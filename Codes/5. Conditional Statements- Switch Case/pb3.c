// Write a C program to implement a simple calculator that performs addition, subtraction, multiplication, or division based on the user's choice using switch-case.
#include<stdio.h>
int main()
{
char c;
int a,b;
printf("Addition: +\n");
printf("Subraction: -\n");
printf("Multiplication: *\n");
printf("Division: /\n");
printf("\nEnter choice :");
scanf("%c",&c);
printf("Enter 1st no.:");
scanf("%d",&a);
printf("Enter 2nd no.:");
scanf("%d",&b);
switch (c)
{
case '+':
int sum=a+b;
printf("Sum of two numbers:%d \n",sum);
break;
case '-':
int diff=a-b;
printf("Difference of two numbers:%d \n",diff);
break;
case '*':
int prod=a*b;
printf("Product of two numbers:%d \n",prod);
break;
case '/':
int quo=a/b;
printf("Quotient of two numbers:%d \n",quo);
break;
default:
printf("Choice entered is wrong");
break;
}
return 0;
}
