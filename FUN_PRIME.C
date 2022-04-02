#include<stdio.h>
#include<conio.h>
void prime(int num)
{
 int j,i,count=0;
 j=num/2;
 for(i=2;i<j;i++)
 {
   if(num%i==0)
   count++;
 }
 if(count==0)
 printf("Prime number");
 else
 printf("Not Prime Number !");
}
void main()
{
 int num;
 clrscr();
 printf("Enter Number : ");
 scanf("%d",&num);
 prime(num);
 getch();
}