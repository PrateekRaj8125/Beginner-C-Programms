#include<stdio.h>
int main()
{
int n,ctr,sum=0;
float avg;
printf("Enter no. of integers to be entered:");
scanf("%d",&n);
int a[n];
printf("Enter %d Integers:\n",n);
for(ctr=0;ctr<n;ctr++)
{
scanf("%d",&a[ctr]);
sum+=a[ctr];
}
avg=sum/n;
printf("Average of entered integers:%f\n",avg);
return 0;
}
