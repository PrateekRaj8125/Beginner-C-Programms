//Enter two no. and find largest no. using if-else statement
#include<stdio.h>
int main()
{
int n1,n2,max;
printf("Enter 1st no.:");
scanf("%d",&n1);
printf("Enter 2nd no.:");
scanf("%d",&n2);
if(n1>n2)
max=n1;
else
max=n2;
printf("%d is the largest no. \n",max);
return 0;
}
