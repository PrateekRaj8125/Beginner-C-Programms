//find  sum of diagonal elements
#include<stdio.h>
int main()
{
int rctr,cctr,m,n,sum=0;
printf("Enter no. of rows of matrix:");
scanf("%d",&m);
printf("Enter no. of columns of matrix:");
scanf("%d",&n);
int a[m][n];
for(rctr=0;rctr<m;rctr++)
{
printf("Enter row %d values:\n",(rctr+1));
for(cctr=0;cctr<n;cctr++)
scanf("%d",&a[rctr][cctr]);
}
for(rctr=0;rctr<m;rctr++)
{
for(cctr=0;cctr<n;cctr++)
if(rctr==cctr)
sum+=a[rctr][cctr];
}
printf("Sum of diagonal numbers.:%d\n",sum);
return 0;
}
