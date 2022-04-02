#include<stdio.h>
#include<conio.h>
void main()
{
 int num1=0,num2=1,num3,rang,i;
 clrscr();
 num3=num1+num2;
 printf("Enter Range:");
 scanf("%d",&rang);
 printf("Fibonacci Serise:");
 printf("%d %d ",num1,num2);
 for(i=3;i<=rang;i++)
 {
  printf("%d  ",num3);
  num1=num2;
  num2=num3;
  num3=num1+num2;
 }

 getch();
}