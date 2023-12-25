//Write a program to provide choice for printing months using Choice number
#include<stdio.h>
int main()
 {
 int n;
 printf("Enter a choice:");
 scanf("%d",&n);
 switch(n)
 {
 case 1:
 printf("Month is January");
 break;
 case 2:
 printf("Month is February");
 break;
case 3:
 printf("Month is March");
 break;
case 4:
 printf("Month is April");
case 5:
break;
 printf("Month is May");
case 6:
break;
case 7:
printf("Month is June");
break;
case 8:
printf("Month is July");
break;
case 9:
printf("Month is August");
break;
case 10:
printf("Month is September");
break;
case 11:
printf("Month is October");
break;
case 12:
printf("Month is November");
break;
default:
printf("Wrong choice entered");
break;
}
return 0;
}
