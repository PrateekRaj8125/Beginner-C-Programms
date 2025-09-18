// Write a C program to read a 3x3 matrix and print only the elements where the row and column indices are the same (diagonal elements).
#include<stdio.h>
int main()
{
int rctr,cctr,a[3][3];
for(rctr=0;rctr<3;rctr++)
{
printf("Enter row %d values:\n",(rctr+1));
for(cctr=0;cctr<3;cctr++)
scanf("%d",&a[rctr][cctr]);
}
printf("\nRequired values are:\n");
for(rctr=0;rctr<3;rctr++)
{
for(cctr=0;cctr<3;cctr++)
{
if(rctr==cctr)
printf("%d \n",a[rctr][cctr]);
}
}
return 0;
}
