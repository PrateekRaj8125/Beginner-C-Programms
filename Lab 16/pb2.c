//  WAP to search an element in an array using function
#include<stdio.h>
void search(int[],int,int);
void main()
{
    int n,s;
    printf("Enter no. of terms to be entered:");
    scanf("%d",&n);
    int a[n],ctr;
    printf("Enter %d values:\n",n);
    for(ctr=0;ctr<n;ctr++)
    scanf("%d",&a[ctr]);
    printf("Enter no. to be searched:");
    scanf("%d",&s);
    search(a,n,s);
}
void search(int a[],int n,int s)
{
    int ctr,flag=0;
    for(ctr=0;ctr<n;ctr++)
    {
        if(a[ctr]==s)
        {
            printf("%d is found in position %d\n",s,(ctr+1));
            flag=1;
        }
    }
    if (flag!=1)
    printf("%d is not present in array\n",s);
}
