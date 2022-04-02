#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char a[100],b[100];
 clrscr();
 printf("Enter String :");
 gets(a);
 strcpy(b,a);
 printf("\nString A : %s\n\n",a);
 printf("String B : %s",b);
 getch();

}