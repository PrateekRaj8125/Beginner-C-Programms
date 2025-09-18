// Write a C program to read a 3x3 matrix from the user and display the matrix.
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
printf("The entered matrix:\n");
for(rctr=0;rctr<3;rctr++)
{
for(cctr=0;cctr<3;cctr++)
printf("%d ",a[rctr][cctr]);
printf("\n");
}
return 0;
}
