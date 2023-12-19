//copy string in another variable
#include<stdio.h>
#include<string.h>
void main()
{
    char n1[10000],n2[10000];
    printf("Enter a String:");
    gets(n1);
    int l=strlen(n1);
    int ctr;
    for(ctr=0;ctr<l;ctr++)
    n2[ctr]=n1[ctr];
    n2[(ctr)]='\0';
    printf("The output:");
    puts(n2);
    printf("\n");
}