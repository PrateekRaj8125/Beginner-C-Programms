//calculate length of entered string
#include<stdio.h>
void main()
{
    char str[10000];
    printf("Enter a string:");
    scanf("%s",str);
    int ctr;
    for(int i=0;i<10000;i++)
    {
        if(str[i]!='\0')
        ctr++;
        else
        break;
    }
    printf("%d is length of string\n",ctr);
}