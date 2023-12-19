#include<stdio.h>
int fibonacy(int);
void main()
{
    int n;
    printf("Enter no.of terms to be printed:");
    scanf("%d",&n);
    printf("0,1,");
    int a=fibonacy(n);
    printf("\n");
}
int n1=0,n2=1,s;
int fibonacy(int n)
{
    if(n>2)
    {
    if(n!=2)
    {
        s=n1+n2;
        printf("%d,",s);
        n1=n2;
        n2=s;
        return(fibonacy(n-1));
    }
    else 
    return n;
}
else 
return 0;
}