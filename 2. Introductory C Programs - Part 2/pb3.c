// Write a C program to convert entered time in seconds to hours, minutes, and seconds (hh:mm:ss format).
#include<stdio.h>
int main()
{
int s,h,m;
printf("Entertime in seconds:");
scanf("%d",&s);
printf("%d seconds=",s);
h=s/(60*60);
s=s%(60*60);
m=s/60;
s=s%60;
printf("%d hours %d minutes %d seconds \n",h,m,s);
return 0;
}
