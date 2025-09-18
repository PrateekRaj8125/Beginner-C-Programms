// Write a C program to print a numerical pyramid pattern in a triangular matrix format.
#include<stdio.h>
int main()
{
int rctr,cctr,sctr;
for(rctr=0;rctr<5;rctr++)
{
for(sctr=0;sctr<5-rctr;sctr++)
printf(" ");
for(cctr=0;cctr<(2*rctr)+1;cctr++)
{
if(cctr<=rctr)
printf("%d",cctr+1);
else
printf("%d",(2*rctr+1-cctr));
}
printf("\n");
}
return 0;
}
