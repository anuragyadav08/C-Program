#include<stdio.h>
#include<conio.h>
void main()
{   
  int num;
  clrscr();
  printf("Enter Number : ");
  scanf("%d",&num);
  if(num%2==0)
  {
    printf("\nNumber %d is Even",num);
  }
  else
  {
   printf("Number %d is Odd",num);
  }
  getch();
}