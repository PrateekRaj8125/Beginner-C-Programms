#include<stdio.h>
int main()
{
int n,sum=0,ctr=1;
double avg;
while(ctr<=10)
{
printf("Enter a no.:");
scanf("%d",&n);
sum=sum+n;
ctr++;
}
avg=sum/10;
printf("Sum of entered nos.:%d\n",sum);
printf("Average of entered nos.:%lf\n",avg);
return 0;
}
