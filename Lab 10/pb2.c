//Enter values in an array and display its sum
#include<stdio.h>
int main()
{
int n,ctr,sum=0;
printf("Enter no. of Integers to be entered:");
scanf("%d",&n);
int a[n];
printf("Enter %d Integers:\n",n);
for(ctr=0;ctr<n;ctr++)
{
scanf("%d",&a[ctr]);
sum+=a[ctr];
}
printf("Sum of entered Integers:%d\n",sum);
return 0;
}
