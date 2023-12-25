//Enter 3 numbers and find the largest no. among them using ternary operator
#include<stdio.h>
int main()
{
int n1,n2,n3,ln;
printf("Enter 1st no.:");
scanf("%d",&n1);
printf("Enter 2nd no.:");
scanf("%d",&n2);
printf("Enter 3rd no.:");
scanf("%d",&n3);
ln=((n1>n2)&&(n1>n3))?n1:(n2>n3)?n2:n3;
printf("Largest no.: %d \n",ln);
return 0;
}
