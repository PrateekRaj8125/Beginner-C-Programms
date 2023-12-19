#include<stdio.h>
int main()
{
int n1=0,n2=1,n=0,i,ctr;
printf("Enter upto no. of terms fibonacy series is to be printed:");
scanf("%d",&i);
printf("Fibonacy series upto %d terms:\n",i);
for(ctr=1;ctr<=i;ctr++)
{
printf("%d,",n1);
n=n1+n2;
n1=n2;
n2=n;
}
printf("\n");
return 0;
}
