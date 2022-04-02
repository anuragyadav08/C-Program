#include<stdio.h>
#include<conio.h>
void main()
{
 int num,i;
 clrscr();
 printf("Enter Number :");
 scanf("%d",&num);
 printf("Multiplication table of %d is:\n\n",num);
 for(i=1;i<=10;i++)
 {
  printf("%d*%d=%d\n",num,i,num*i);
 }
 getch();
}