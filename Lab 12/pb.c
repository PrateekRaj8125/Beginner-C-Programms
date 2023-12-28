//Enter n valuesand print largest integer in the array
#include<stdio.h>
int main()
{
int n,ctr,max=0;
   printf("Enter no. of integers to be entered:");
   scanf("%d",&n);
int a[n];
   printf("Enter %d Integers:\n",n);
   for(ctr=0;ctr<n;ctr++)
     scanf("%d",&a[ctr]);
   for(ctr=0;ctr<n;ctr++)
    {
     if(a[ctr]%2==0)
     max=a[ctr]>max?a[ctr]:max;
    }
    printf("Largest Even Integer in array :%d\n",max);
  return 0;
}