#include<stdio.h>
int main()
{
int rctr,cctr,sctr;
for(rctr=0;rctr<5;rctr++)
{
for(sctr=0;sctr<(5-rctr);sctr++)
{
printf(" ");
}
for(cctr=0;cctr<(rctr*2)+1;cctr++)
{
printf("*");
}
printf("\n");
}
return 0;
}
