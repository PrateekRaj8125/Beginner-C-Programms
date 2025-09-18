// Write a C program to read n integers into an array and print only the odd values.
#include<stdio.h>
int main()
{
int n,ctr;
printf("Enter no. of terms to be entered:");
scanf("%d",&n);
int x[n];
printf("Enter %d numbers:\n",n);
for(ctr=0;ctr<n;ctr++)
scanf("%d",&x[ctr]);
printf("Odd Values:");
for(ctr=0;ctr<n;ctr++)
{
if(x[ctr]%2==1)
printf("%d,",x[ctr]);
}
printf("\n");
return 0;
}
