// Write a C program to print a number in a 4x4 grid format as entered by the user.
#include<stdio.h>
int main()
{
int rctr,cctr,n;
printf("Enter no. to be printed in format:");
scanf("%d",&n);
for(rctr=1;rctr<=4;rctr++)
{
for(cctr=1;cctr<=4;cctr++)
printf("%d ",n);
printf("\n");
}
return 0;
}
