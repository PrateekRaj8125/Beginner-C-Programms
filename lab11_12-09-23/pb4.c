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
printf("Even Values:");
for(ctr=0;ctr<n;ctr++)
{
if(x[ctr]%2==0)
printf("%d,",x[ctr]);
}
printf("\n");
return 0;
}
