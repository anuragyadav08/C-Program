#include<stdio.h>
#include<conio.h>
void main()
{
long int num;
int rem,sum=0;
clrscr();
printf("Enter Number :");
scanf("%ld",&num);
while(num>0)
 {
  rem=num%10;
  sum=sum+rem;
  num=num/10;
 }
 printf("Sum of Digit = %d",sum);
getch();
}