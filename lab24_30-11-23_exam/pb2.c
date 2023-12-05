#include<stdio.h>
#include<string.h>
void main()
{
    char s[1000];
    printf("Enter a String:");
    gets(s);
    printf("Last Characters:");
    int ctr;
    for(ctr=0;s[ctr]!='\0';ctr++)
    {
        if(s[ctr]==' ')
        printf("%c,",s[(ctr-1)]);
    }
    printf("%c\n",s[(ctr-1)]);
}