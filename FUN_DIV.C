#include<stdio.h>
#include<conio.h>
int div(int num1,int num2 )
{
 int num;
 num=num1/num2;
 return num;
}
void main()
{
 int num1,num2,s;
 clrscr();
 printf("Enter Number :");
 scanf("%d%d",&num1,&num2);
 s=div(num1,num2);
 printf("%d / %d = %d",num1,num2,s);
 getch();
}