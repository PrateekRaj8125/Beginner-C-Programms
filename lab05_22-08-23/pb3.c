#include<stdio.h>
#include<math.h>
int main()
{
double x,a,b,c,det,sn1,sn2;
printf("Enter x:");
scanf("%lf",&x);
printf("Enter a:");
scanf("%lf",&a);
printf("Enter b:");
scanf("%lf",&b);
printf("Enter c:");
scanf("%lf",&c);
det=(b*b)-(4*a*c);
if(det>=0)
{
sn1=((-b)+sqrt(det))/(2*a);
sn2=((-b)-sqrt(det))/(2*a);
printf("The solutions are: %lf and %lf \n",sn1,sn2);
}
else
printf("The roots are imaginary");
return 0;
}
