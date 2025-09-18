// Write a C program to read a string from the user and display it.
#include<stdio.h>
void main()
{
    char a[1000000];
    printf("Enter a string:");
    scanf("%s",a);
    printf("String:%s\n",a);
}