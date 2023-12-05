
#include<stdio.h>
int main()
{
int n,ctr,max=0,max2=0;
printf("Enter no. of integers to be entered:");
scanf("%d",&n);
int a[n];
printf("Enter %d integrs:\n",n);
for(ctr=0;ctr<n;ctr++)
{
scanf("%d",&a[ctr]);
max=max>a[ctr]?max:a[ctr];
}
for(ctr=0;ctr<n;ctr++)
{
if(max==a[ctr])
continue;
else
max2=max2>a[ctr]?max2:a[ctr];
}
printf("2nd largest no. in array is:%d\n",max2);
return 0;
}
