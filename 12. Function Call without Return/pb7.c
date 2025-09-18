/*Write a C program to enter a roll number, calculate a = last digit of roll + 2 and b = last digit of roll + 35,
then print all numbers between a and b whose last digit is 3 or 9.*/

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
