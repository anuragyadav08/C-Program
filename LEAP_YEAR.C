#include<stdio.h>
#include<conio.h>
void main()
{
int year;
clrscr();
printf("Enter Year :");
scanf("%d",&year);
if((year%4==0 && year%100!=0)||(year%400==0))
 {
  printf("Year %d is Leap Year",year);
 }
else if(year<0)
 {
  printf("Year Can't be Negative");
 }
else
 {
  printf("Year %d is Not Leap Year",year);
 }

  getch();
  }