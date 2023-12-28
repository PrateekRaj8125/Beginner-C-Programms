//Enter value of n and r and find the combination using formula of nCr using function
#include<stdio.h>
int fact(int);
void main()
{
int n,r;
double c;
printf("Enter value of n:");
scanf("%d",&n);
printf("Enter value of r:");
scanf("%d",&r);
c=fact(n)/(fact(n-r)*fact(r));
printf("Value of nCr:%lf\n",c);
}
int fact(int x)
{
int s,f=1;
for(s=x;s>=1;s--)
f*=s;
return f;
}
