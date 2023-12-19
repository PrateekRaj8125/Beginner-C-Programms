//print the transpose of matrix
#include<stdio.h>
int main()
{
int rctr,cctr,n[3][3];
for (rctr=0;rctr<3;rctr++)
{
printf("Enter row %d values:\n",(rctr+1));
for(cctr=0;cctr<3;cctr++)
scanf("%d",&n[rctr][cctr]);
}
printf("Original Matrix:\n");
for(rctr=0;rctr<3;rctr++)
{
for(cctr=0;cctr<3;cctr++)
printf("%d ",n[rctr][cctr]);
printf("\n");
}
printf("Transpose of matrix:\n");
for(rctr=0;rctr<3;rctr++)
{
for(cctr=0;cctr<3;cctr++)
printf("%d ",n[cctr][rctr]);
printf("\n");
}
return 0;
}
