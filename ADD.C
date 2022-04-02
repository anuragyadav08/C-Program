#include<stdio.h>
#include<conio.h>
void main()
{
  int num1,num2,sum;
  printf("Enter First Numbers :");
  scanf("%d\n",&num1);
   printf("Enter Second Numbers :");
  scanf("%d\n",&num2);
  sum=num1+num2;
  printf("Sum of %d and %d is :%d",num1,num2,sum);
  getch();
}