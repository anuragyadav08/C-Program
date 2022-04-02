#include<stdio.h>
#include<conio.h>
int fact(int n)
{
   if(n==0)
   return 1;
   else
   return n*fact(n-1);
}
void main()
{
 int num,res;
 clrscr();
 printf("Enter Number : ");
 scanf("%d",&num);
 res=fact(num);
 printf("Factorial of %d is : %d",num,res);
 getch();
}