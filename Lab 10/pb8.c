//Enter n values in an array and print od values and even values
#include<stdio.h>
int main()
{
int n,ctr;
printf("Enter no. of values to be entered:");
scanf("%d",&n);
int a[n];
printf("Enter %d Values:\n",n);
for(ctr=0;ctr<n;ctr++)
scanf("%d",&a[ctr]);
printf("Even Values:");
for(ctr=0;ctr<n;ctr++)
{
if(a[ctr]%2==0)
printf("%d,",a[ctr]);
}
printf("\nOdd values:");
for(ctr=0;ctr<n;ctr++)
{
if(a[ctr]%2==1)
printf("%d,",a[ctr]);
}
printf("\n");
return 0;
}
