//Write a C program to concatenate two strings without using any library functions.
#include<string.h>
#include<stdio.h>
void main()
{
    char s1[10000],s2[10000],as[10000];
    printf("Enter 1st string:");
    gets(s1);
    printf("Enter 2nd String:");
    gets(s2);
    int ctr,ctr1,ctr2;
    for(ctr1=0;s1[ctr1]!='\0';ctr1++)
    as[ctr1]=s1[ctr1];
    for(ctr2=0,ctr=ctr1;s2[ctr2]!='\0';ctr2++,ctr++)
    as[ctr]=s2[ctr2];
    printf("Concatenated String:");
    puts(as);
    printf("\n");
}