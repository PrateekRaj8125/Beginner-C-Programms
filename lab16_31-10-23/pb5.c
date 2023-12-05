//printing the series
#include<stdio.h>
long fact(int);
long power(int,int);
void main()
{
int n, x;
double sum=0;
printf("Enter no. of terms:");
scanf("%d",&n);
printf("Enter value of x:");
scanf("%d",&x);
int ctr,p=1;
for(ctr=1;ctr<=n;ctr++)
{
if(ctr%2==1)
sum+=((double)power(x,p)/(double)fact(p));
else if(ctr%2==0)
sum-=((double)power(x,p)/(double)fact(p));
p+=2;
}
printf("sin x=%lf\n",sum);
}
long fact(int a)
{
int i,f=1;
for(i=1;i<=a;i++)
f*=i;
return f;
}
long power(int a,int p)
{
int i,exp=a;
for(i=1;i<=p;i++)
exp*=a;
return exp;
}
