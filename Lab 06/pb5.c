//Enter a no. and print whether it is palindrome or not
#include<stdio.h>
int main()
{
int n,d,nn=0,dn;
printf("Enter a no.:");
scanf("%d",&n);
dn=n;
while(dn>0)
{
d=dn%10;
nn=(nn*10)+d;
dn=dn/10;
}
if(nn==n)
printf("%d is a palindrome no.\n",n);
else
printf("%d is not a palindrome no. \n",n);
return 0;
}
