//calculate large between two nos.
#include<stdio.h>
int max(int,int);
void main()
{
int a,b;
printf("Enter 1st no.:");
scanf("%d",&a);
printf("Enter 2nd no.:");
scanf("%d",&b);
int ln=max(a,b);
printf("Larger Between two Nos.:%d\n",ln);
}
int max(int x,int y)
{
int l=x>y?x:y;
return l;
}
