#include<stdio.h>
int main()
{
int n,b=0,i=1,nn;
printf("Enter a decimal no.:");
scanf("%d",&n);
nn=n;
while(nn!=0)
{
int r=nn%2;
nn=nn/2;
b=b+r*i;
i=i*10;
}
printf("Binary Equivalent of %d is %d\n",n,b);
return 0;
}
