#include<stdio.h>
#include<conio.h>
void fact()
{
 int num,i,res=1;
 printf("Enter Number : ");
 scanf("%d",&num);
 for(i=num;i>0;i--)
 {
  res*=i;
  //printf("%d",res);
 }
 printf("Factorial of %d is : %d",num,res);
}
void main()
{
 clrscr();
 fact();
 getch();
}