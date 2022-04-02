#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char a[100];
 int val;
 clrscr();
 printf("Enter String :\n\n");
 gets(a);
 val=strlen(a);
 printf("Length: %d",val);
 getch();

}