//print last character of each word of a sentence
#include<stdio.h>
#include<stdio.h>
void main()
{
    char s[10000];
    printf("Enter a Senetence:");
    gets(s);
    int av,ctr;
    printf("Last Character:");
    for(ctr=0;s[ctr]!='\0';ctr++)
    {
        av=(int)s[ctr];
        if(av==32)
        printf("%c,",s[ctr-1]);
    }
    printf("%c\n",s[ctr-1]);
}