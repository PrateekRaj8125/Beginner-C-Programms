#include<stdio.h>
int main()
{
int p,m;
printf("Enter percentage marks:");
scanf("%d",&p);
m=p/10;
switch (m)
{
case 10:
case 9:
printf("Grade:O\n");
break;
case 8:
printf("Grade:E\n");
break;
case 7:
printf("Grade:A\n");
break;
case 6:
printf("Grade:B\n");
break;
case 5:
printf("Grade:C\n");
break;
case 4:
printf("Grade:D\n");
break;
default:
printf("Congratulations you failed.\n");
break;
}
return 0;
}
