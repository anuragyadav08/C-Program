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
 printf("\nString A : %s\n\n",a);
 printf("String B : %s\n\n",b);
 printf("Concatenation of A & B : %s",strcat(a,b));
 getch();

}