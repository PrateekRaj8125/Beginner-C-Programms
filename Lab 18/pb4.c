//printing no. of vowels and consonants
#include<stdio.h>
#include<string.h>
void main()
{
    char s[10000];
    int vctr,cctr,ctr;
    printf("Enter a String:");
    gets(s);
    for(ctr=0;s[ctr]!='\0';ctr++)
    {
        char ch=s[ctr];
        int av=s[ctr];
        if((av>=65&&av<=90)||(av>=97&&av<=122))
        {
            if((ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')||(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'))
            vctr++;
            else
            cctr++;
        }
    }
    printf("Total No. of Vowels:%d\n",vctr);
    printf("Total No. of Consonants:%d\n",cctr);
}