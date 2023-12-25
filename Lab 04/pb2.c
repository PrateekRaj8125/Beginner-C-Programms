//enter a character in lower case and convert it in upper case
#include<stdio.h>
int main()
{
char c,nc;
int av,nav;
printf("Enter a character in lower case:");
scanf("%c",&c);
av=c;
if(av>=97&&av<=122)
{
nav=av-32;
nc=nav;
printf("%c is the new character \n",nc);
}
else
printf("The entered character is not correct");
return 0;
}
