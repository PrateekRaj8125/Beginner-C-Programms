//find factorial using reccurssion
#include<stdio.h>
int fact(int);
void main()
{
    int num, f;
    printf("Enter a no.:");
    scanf("%d",&num);
    f=fact(num);
    printf("Factorial of %d :%d\n",num,f);
}
int fact(int n)
{
    if(n!=1)
return(n*fact(n-1));
else
 return n;
}