#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float r,t;
int ch,n;
long double a,p,ci,si;
clrscr();
printf("Enter 1 for Simple Interest :\nEnter 2 for Compound Intrest:");
scanf("%d",&ch);
if(ch==1)
 {
  printf("Enter Principal Amount :");
  scanf("%Lf",&p);
  printf("Enter Rate :");
  scanf("%f",&r);
  printf("Enter Time period :");
  scanf("%f",&t);
  si=(p*r*t)/100;
  printf("Simple Interest is : %Lf",si);
 }
else if(ch==2)
 {
  printf("Enter Principal Amount :");
  scanf("%Lf",&p);
  printf("Enter Rate :");
  scanf("%f",&r);
  printf("Enter Time Period :");
  scanf("%f",&t);
  printf("Enter The Compounded Type :\n 1 for Annually\n 2 for Half Yearly\n 3 for Quater Yearly\n 12 for monthly");
  scanf("%d",&n);
  a=p*(pow((1+r/100),n*t));
  ci=a-p;
  printf("Compound Interest is : %Lf",ci);
 }
else
 {
  printf("Invalid Choice !");
 }
getch();
}