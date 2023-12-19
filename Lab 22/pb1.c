//WAP to store one student’s information (i.e. student’s roll no, name, gender, marks etc) of an educational institute and display all the data, using structure.
#include<stdio.h>
#include<string.h>
struct student
{
    int rn,m[6],tm;
    char name[1000],gender[1000];
}s;
void main()
{
    struct student s;
    printf("Enter Student Details:");
    printf("\nEnter Name:");
    gets(s.name);
    printf("Enter Roll No.:");
    scanf("%d",&s.rn);
    printf("Enter Gender:");
    getchar();
    gets(s.gender);
    int ctr;
    s.tm=0;
    for(ctr=0;ctr<6;ctr++)
    {
    printf("Enter Marks of Subject %d:",(ctr+1));
    scanf("%d",&s.m[ctr]);
    s.tm+=s.m[ctr];
    }
    printf("\n\n");
    printf("STUDENT DATA\n");
    printf("Name: ");
    puts(s.name);
    printf("Roll No.: %d",s.rn);
    printf("\nGender: ");
    puts(s.gender);
    printf("Subject\t\tMarks\n");
    for(ctr=0;ctr<6;ctr++)
    printf("%d\t\t%d\n",(ctr+1),s.m[ctr]);
    printf("Total Marks: %d\n",s.tm);
}