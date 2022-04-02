#include<stdio.h>
#include<conio.h>
void main()
{
long int num;
int count=0;
clrscr();
printf("Enter Number :");
scanf("%ld",&num);
while(num>0)
 {
  num=num/10;
  count++;
 }
 printf("No. of Digit = %d",count);
getch();
}