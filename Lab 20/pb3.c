//WAP to count vowels in a string using pointer
#include<stdio.h>
#include<string.h>
void main()
{
    char s[100000],*c,nc;
    int ctr,vctr;
    printf("Enter a Sentence:");
    gets(s);
    c=s;
    for(ctr=0;s[ctr]!='\0';ctr++)
    {
        nc=*(c+ctr);
        if((nc=='a'||nc=='e'||nc=='i'||nc=='o'||nc=='u')||(nc=='A'||nc=='E'||nc=='I'||nc=='O'||nc=='U'))
        vctr++;
    }
    printf("Total no. of vowels:%d\n",vctr);
}