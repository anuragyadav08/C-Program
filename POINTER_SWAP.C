#include<stdio.h>
#include<conio.h>
void main()
{
int a=10,b=20,*p,*q,temp;
clrscr();
p=&a;
q=&b;
printf("Before Swapping :-\nNumber A : %d\nNumber B : %d\n\n",a,b);
temp=*p;
*p=*q;
*q=temp;
printf("\nAfter Swapping :-\nNumber A : %d\nNumber B : %d",a,b);
getch();
}