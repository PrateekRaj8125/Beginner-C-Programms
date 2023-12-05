//swap a character with another character
#include<stdio.h>
#include<string.h>
void main()
{
    char s[10000],nc,c;
    printf("Enter a string:");
    gets(s);
    printf("Enter Character to be replaced:");
    scanf("%c",&c);
    printf("Enter Character to be Replacing:");
    getchar();
    scanf("%c",&nc);
    int ctr;
    for(ctr=0;s[ctr]!='\0';ctr++)
    {
        if (s[ctr]==c)
        s[ctr]=nc;
    }
    printf("New String:");    
    puts(s);
    printf("\n");
}
