//find sum of two matrices
#include<stdio.h>
int main()
{
int rctr, cctr,a[3][3],b[3][3],s[3][3];
printf("Enter Values of First Matrix:\n");
for(rctr=0;rctr<3;rctr++)
{
printf("Enter row %d values:\n",(rctr+1));
for(cctr=0;cctr<3;cctr++)
scanf("%d",&a[rctr][cctr]);
}
printf("Enter Values of Second Matrix:\n");
for(rctr=0;rctr<3;rctr++)
{
printf("Enter row %d values:\n",(rctr+1));
for(cctr=0;cctr<3;cctr++)
scanf("%d",&b[rctr][cctr]);
}
printf("\nSum of both matrices:\n");
for(rctr=0;rctr<3;rctr++)
{
for(cctr=0;cctr<3;cctr++)
{
s[rctr][cctr]=a[rctr][cctr]+b[rctr][cctr];
printf("%d ",s[rctr][cctr]);
}
printf("\n");
}
return 0;
}
