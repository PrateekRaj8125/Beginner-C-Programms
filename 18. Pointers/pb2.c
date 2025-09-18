//Write a C program to print a string using a pointer.
#include<stdio.h>
#include<string.h>
void main()
{
    char s[10000],*c;
    printf("Enter a String:");
    gets(s);
    c=s;
    printf("The Output:");
    for(int ctr=0;s[ctr]!='\0';ctr++)
        printf("%c",*(c+ctr));
    printf("\n");
}