#include<stdio.h>
#include<conio.h>
void main()
{
 int num1,num2;
 clrscr();
 printf("Enter Numbers :");
 scanf("%d%d", &num1,&num2);
 printf("Numbers : %d %d",num1,num2);
 num1=num1+num2;
 num2=num1-num2;
 num1=num1-num2;
 printf("\nNumbers After Swaping : %d %d",num1,num2);
 getch();
}