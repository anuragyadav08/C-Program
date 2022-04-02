#include<stdio.h>
#include<conio.h>
void main()
{   
  int num,i;
  long double result=1;
  clrscr();
  printf("Enter Number :");
  scanf("%d",&num);
  for(i=num;i>0;i--)
  {
   result*=i;
  }
  printf("Factorial of %d is : %Lf",num,result);
  getch();
}