//convert entered time in seconds to hh/mm/ss format
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
