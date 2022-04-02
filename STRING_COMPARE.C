#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char a[100],b[100];
 clrscr();
 printf("Enter String A :");
 gets(a);
 printf("Enter String B :");
 gets(b);
 if(strcmp(a,b)==0)
 {
  printf("Strings are Equal");
 }
 else
 {
  printf("Strings are not Equal")
 }
 getch();

}
© 2022 Git