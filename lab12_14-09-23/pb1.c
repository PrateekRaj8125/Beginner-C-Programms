#include<stdio.h>
int main()
{
int a[10],n,i=0,d;
printf("Enter a decimal no.:");
scanf("%d",&n);
while(n!=0)
{
d=n%2;
n/=2;
a[i]=d;
i++;
}
printf("Binary Equivalent:");
for(i=i-1;i>=0;i--)
printf("%d",a[i]);
printf("\n");
return 0;
}
