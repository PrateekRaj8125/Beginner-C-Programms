#include<stdio.h>
int main()
{
int rctr,cctr;
char c;
for(rctr=65;rctr<=69;rctr++)
{
for(cctr=65;cctr<=rctr;cctr++)
{
c=cctr;
printf("%c ",c);
}
printf("\n");
}
return 0;
}
