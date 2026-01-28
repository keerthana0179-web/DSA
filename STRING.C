#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char a[20],b[20];
 clrscr();
 printf("Enter a string:\n");
 scanf("%s",a);
 strcpy(b,a);
 strrev(b);
 if (strcmp(a,b)==0)
  {
   printf("It is a palindrome");
  }
 else
  {
   printf("Not a palindrome");
  }
 getch();
}