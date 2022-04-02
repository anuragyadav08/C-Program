#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char a[100];
 clrscr();
 printf("Enter String A :");
 gets(a);
 strrev(a);
 printf("Reverse String : %s",a);
 getch();

}