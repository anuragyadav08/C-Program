#include<stdio.h>
#include<conio.h>
int natural_num(int n)
{
   if(n==0)
   return 0;
   else
   return n+natural_num(n-1);
}
void main()
{
 int num,res;
 clrscr();
 printf("Enter Number : ");
 scanf("%d",&num);
 res=natural_num(num);
 printf("Sum of %d Natural Number is : %d",num,res);
 getch();
}