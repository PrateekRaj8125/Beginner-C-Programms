#include<stdio.h>
int main()
{
int n,d,nn=0;
printf("Enter a no.:");
scanf("%d",&n);
while(n>0)
{
d=n%10;
nn=(nn*10)+d;
n=n/10;
}
printf("New no.:%d\n",nn);
return 0;
}
