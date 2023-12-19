#include<stdio.h>
int main()
{
int rctr,cctr;
for(rctr=1;rctr<=5;rctr++)
{
for(cctr=1;cctr<=rctr;cctr++)
{
printf("%d ",(rctr+cctr+1)%2);
}
printf("\n");
}
return 0;
}
