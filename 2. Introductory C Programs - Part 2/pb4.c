// Write a C program to convert distance entered in meters into kilometers and meters.
#include<stdio.h>
int main()
{
int m,km;
printf("Enter distance in meters:");
scanf("%d",&m);
printf("%d meters =",m);
km=m/1000;
m=m%1000;
printf("%d km %d m \n",km,m);
return 0;
}
