#include<stdio.h>
void f1(int);
void main()
{
    int rn;
    printf("Enter your roll no.:");
    scanf("%d",&rn);
    f1(rn);
}
void f1(int roll)
{
    int a=(roll%10)+2,b=(roll%10)+35;
    int ctr;
    printf("The required output:");
    for(ctr=a;ctr<=b;ctr++)
    {
        if(((ctr%10)==3)||((ctr%10)==9))
        printf("%d,",ctr);
    }
    printf("\n");
}