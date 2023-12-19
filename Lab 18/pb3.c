//wap to display reverse of a string
#include<stdio.h>
#include<string.h>
void main()
{
    char n[10000],a[10000];
    printf("Enter a String:");
    gets(n);
    int l=strlen(n);
    int ctr,dl=l-1;
    for(ctr=0;ctr<l;ctr++)
    {
        a[ctr]=n[dl];
        dl--;
    }
    printf("Reverse String:");
    puts(a);
    printf("\n");
}