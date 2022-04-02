#include<stdio.h>
#include<conio.h>
void main()
{
 int ch,num1,num2,num3;
 clrscr();
 printf("Addition Enter: 1\nSubtraction Enter: 2\nMultiplication Enter: 3\nDivision Enter: 4\n Modulus Enter: 5\nEnter Choice:");
 scanf("%d",&ch);
 if(ch==1)
 {
  printf("Enter Numbers:");
  scanf("%d%d",&num1,&num2);
  num3=num1+num2;
  printf("%d + %d = %d",num1,num2,num3);
 }
 else if(ch==2)
 {
  printf("Enter Numbers:");
  scanf("%d%d",&num1,&num2);
  num3=num1-num2;
  printf("%d - %d = %d",num1,num2,num3);
 }
 else if(ch==3)
 {
  printf("Enter Numbers:");
  scanf("%d%d",&num1,&num2);
  num3=num1*num2;
  printf("%d * %d = %d",num1,num2,num3);
 }
 else if(ch==4)
 {
  printf("Enter Numbers:");
  scanf("%d%d",&num1,&num2);
  num3=num1/num2;
  printf("%d / %d = %d",num1,num2,num3);
 }
  else if(ch==5)
 {
  printf("Enter Numbers:");
  scanf("%d%d",&num1,&num2);
  num3=num1%num2;
  printf("%d mod %d = %d",num1,num2,num3);
 }
 else
 printf("Invalid Choice !");
 getch();
}