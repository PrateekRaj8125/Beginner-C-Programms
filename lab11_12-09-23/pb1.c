#include<stdio.h>
int main()
{
int n,ctr;
printf("Enter no. of integers to be entered:");
scanf("%d",&n);
int x[n];
printf("Enter %d integers:\n",n);
for(ctr=0;ctr<n;ctr++)
scanf("%d",&x[ctr]);
printf("Content of Array: ");
for(ctr=0;ctr<n;ctr++)
printf("%d,",x[ctr]);
printf("\n");
return 0;
}
