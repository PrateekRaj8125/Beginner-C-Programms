#include<stdio.h>
int main()
{
int rctr,cctr;
for(rctr=5;rctr>=1;rctr--)
{
for(cctr=1;cctr<=5;cctr++)
{
if(cctr<rctr)
printf(" ");
else
printf("*");
}
printf("\n");
}
return 0;
}
