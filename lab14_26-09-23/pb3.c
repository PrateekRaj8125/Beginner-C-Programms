//print only nos. whose row and column are same
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
