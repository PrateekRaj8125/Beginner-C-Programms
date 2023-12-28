//Enter n values in an array and print the largest element stored in the array
#include<stdio.h>
int main()
{
int n,ctr,max=0;
printf("Enter no. of Integers to be entered:");
scanf("%d",&n);
int a[n];
printf("Enter %d integers:\n",n);
for(ctr=0;ctr<n;ctr++)
{
scanf("%d",&a[ctr]);
max=a[ctr]>max?a[ctr]:max;
}
printf("Largest element stored in array:%d\n",max);
return 0;
}

