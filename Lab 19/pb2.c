#include <stdio.h>
int multiply(int *n1, int *n2) 
{
    int s = (*n1) * (*n2);
    return s;
}
void main() 
{
    int n1,n2,s;
    printf("Enter first number: ");
    scanf("%d",&n1);
    printf("Enter second number: ");
    scanf("%d",&n2);
    s=multiply(&n1,&n2);
    printf("The product of %d and %d is: %d\n", n1, n2, s);
}