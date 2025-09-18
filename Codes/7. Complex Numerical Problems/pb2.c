// Write a C program to find and print the H.C.F. (Highest Common Factor) of two entered numbers.
#include<stdio.h>
int main()
{
int n1,n2,ctr,min,hcf=1;
printf("Enter 1st no.:");
scanf("%d",&n1);
printf("Enter 2nd no.:");
scanf("%d",&n2);
min=n1<n2?n1:n2;
for(ctr=1;ctr<=min;ctr++)
{
hcf=((n1%ctr==0)&&(n2%ctr==0)&&(ctr>hcf))?ctr:hcf;
}
printf("Highest Common Factors between %d and %d is: %d\n",n1,n2,hcf);
return 0;
}
