#include<stdio.h>
#include<conio.h>
void main()
{
long int num,result=0;
int rem;
clrscr();
printf("Enter Number :");
scanf("%ld",&num);
while(num>0)
 {
  rem=num%10;
  result=result*10+rem;
  num=num/10;
 }
printf("Reverse Number is : %ld",result);
getch();
}