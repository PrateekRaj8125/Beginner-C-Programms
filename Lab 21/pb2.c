//Enter Values in an array and calculate its sum
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,*p,ctr;
    printf("Enter no. of Values to be entered:");
    scanf("%d",&n);
    p=(int *)malloc(sizeof(int)*n);
    printf("Enter %d values:\n",n);
    for(ctr=0;ctr<n;ctr++)
        scanf("%d",(p+ctr));
    int sum=0;
    for(ctr=0;ctr<n;ctr++)
        sum+=*(p+ctr);
    printf("Sum:%d\n",sum);
}