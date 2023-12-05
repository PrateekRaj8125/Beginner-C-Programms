//Write a program to check whether an entered string is palindrome or not.
#include<string.h>
#include<stdio.h>
void main()
{
char s[10000];
printf("Enter a String:");
gets(s);
int l=strlen(s);
int ctr1,ctr2,flag=0;
for(ctr1=0,ctr2=l-1;ctr1<(l/2);ctr1++,ctr2--)
{
    if(s[ctr1]!=s[ctr2])
    {
        printf("The Word is not Palindrome");
        break;
    }
    else 
    flag=1;
}
if(flag==1)
{
printf("Palindrome String:  ");
puts(s);
printf("\n");
}
}