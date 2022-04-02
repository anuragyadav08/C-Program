#include<stdio.h>
#include<conio.h>
void main()
{
 int num1,num2,sum=0;
 clrscr();
 printf("Enter Two Number :");
 scanf("%d%d",&num1,&num2);
 printf("Sum of no. between %d and %d is : ",num1,num2);
 while(num2>=num1)
 {
  sum=sum+num1;
  num1++;
 }
 printf("%d",sum);
 getch();
}