//Write a C program to display the first character of each word in a sentence.
#include<stdio.h>
#include<string.h>
void main()
{
    char n[10000];
    printf("Enter a Sentence:");
    gets(n);
    int av,i;
    printf("First Characters:%c,",n[0]);
    for(i=1;n[i]!='\0';i++)
    {
        av=(int)n[i];
        if(av==32)
        printf("%c,",n[(i+1)]);
    }
    printf("\n");
}