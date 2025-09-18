// Write a C program to find and print the reverse of a 3-digit number entered by the user.
#include<stdio.h>
int main()
{
int n,d1,d2,d3,nn;
printf ("Enter a 3-digit no.:");
scanf("%d",&n);
d1=n%10;
n=n/10;
d2=n%10;
n=n/10;
d3=n%10;
nn=(d1*100)+(d2*10)+d3;
printf("New no. obtained: %d \n",nn);
return 0;
}
