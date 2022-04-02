#include<stdio.h>
#include<conio.h>
void main()
{
  int num1,num2,num3;
  clrscr();
 printf("Enter Three Numbers:");
 scanf("%d%d%d",&num1,&num2,&num3);
  if(num1<num2)
 {
   if(num2<num3)
   {
      printf("%d is Smallest Number Among %d %d And %d",num1,num1,num2,num3);
   }
   else
   {
      printf("%d is Smallest Number Among %d %d And %d",num3,num1,num2,num3);
   }
 }
 else
 {
   if(num2<num3)
   {
      printf("%d is Smallest Number Among %d %d And %d",num2,num1,num2,num3);
   }
   else
   {
      printf("%d is Smallest Number Among %d %d And %d",num3,num1,num2,num3);
   }
 }
getch();
}