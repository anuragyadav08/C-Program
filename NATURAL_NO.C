#include<stdio.h>
#include<conio.h>
void main()
{
 int size,i;
 clrscr();
 printf("Enter Size :");
 scanf("%d", &size);
printf("First %d Natural Numbers : ",size);
for(i=1;i<=size;i++)
 {
  printf("%d ",i);
 }
 getch();
}