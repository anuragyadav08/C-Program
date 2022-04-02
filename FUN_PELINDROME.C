#include<stdio.h>
#include<conio.h>
void pelindrome(int num)
{
  int temp,rem,res=0;
  temp=num;
  while(temp>0)
  {
   rem=temp%10;
   res=res*10+rem;
   temp=temp/10;
  }
  if(res==num)
  printf("Pelindrome Number");
  else
  printf("Not Pelindrome Number !");
}
void main()
{
  int num;
  clrscr();
  printf("Enter Number: ");
  scanf("%d",&num);
  pelindrome(num);
  getch();
}