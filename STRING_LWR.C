#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char a[100];
 clrscr();
 printf("Enter String in Uppercase: ");
 gets(a);
 strlwr(a);
 printf("Lowercase String : %s",a);
 getch();

}