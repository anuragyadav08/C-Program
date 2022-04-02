#include<stdio.h>
#include<conio.h>
void main()
{
 int num,i,j,count=0;
 clrscr();
 printf("Enter Number :");
 scanf("%d",&num);
 j=num/2;
 for(i=2;i<j;i++)
 {
  if(num%i==0)
  {
    count++;
  }
 }
 if(count==0)
 {
  printf("Number %d is Prime Number ",num);
 }
 else
 {
  printf("Number %d is Not Prime",num);
 }
 getch();
}