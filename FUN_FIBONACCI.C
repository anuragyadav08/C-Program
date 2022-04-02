#include<stdio.h>
#include<conio.h>
void fib(int size)
{
 int i,num1=0,num2=1,num;
 printf("Fibonacci Serise : %d %d",num1,num2);
 for(i=2;i<size;i++)
 {
  num=num1+num2;
  printf(" %d",num);
  num1=num2;
  num2=num;
 }
}
void main()
{
 int size;
 clrscr();
 printf("Enter Size :");
 scanf("%d",&size);
 fib(size);
 getch();
}