#include<stdio.h>
#include<conio.h>
struct student{
int roll;
char name[20];
int marks;
};

void main()
{
 struct student s;
 struct student*ptr;
 ptr=&s;
 clrscr();
 printf("Enter Roll no:");
 scanf("%d",&ptr->roll);
 printf("Enter Name:");
 scanf("%s",&ptr->name);
 printf("Enter marks");
 scanf("%d",&ptr->marks);
 printf("Name:%s \n Roll:%d \n Marks:%d \n",s.name,s.roll,s.marks);
 getch();
 }
