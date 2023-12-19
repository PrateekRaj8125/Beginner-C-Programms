//write a program to enter a string through dynamic mememory allocation
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    char *s;
    s=(char *)malloc(sizeof(char)*10000);
    printf("Enter a String:");
    gets(s);
    printf("Entered String:");
    puts(s);
    printf("\n");
}