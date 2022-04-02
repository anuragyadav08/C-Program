#include<stdio.h>
#include<conio.h>
void swap(int num1,int num2)
{
  int num;
  num=num1;
  num1=num2;
  num2=num;
  printf("After Swaping : %d  %d",num1,num2);

}
void main()
{
 int a,b;
 clrscr();
 printf("Enter Numbers :");
 scanf("%d%d",&a,&b);
 printf("Before Swapping : %d  %d\n",a,b);
 swap(a,b);
 getch();
}