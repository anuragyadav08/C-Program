#include<stdio.h>
#include<conio.h>
void main()
{
 int ch,num1,num2,s;
 clrscr();
 printf("Enter Choice :\n1: Bitwise AND(&)\n2: Bitwis OR(|)\n3: Bitwise XOR(^)\n4: Right Shift(>>)\n5: Left Shift(<<)\n6: Bitwise Not(~)");
 scanf("%d",&ch);
 if(ch==1)
 {
  printf("Enter Numbers :");
  scanf("%d%d",&num1,&num2);
  printf("%d & %d is %d",num1,num2,num1&num2);
 }
 else if(ch==2)
 {
  
  printf("Enter Numbers :");
  scanf("%d%d",&num1,&num2);
  printf("%d | %d is %d",num1,num2,num1|num2);
 } 
 else if(ch==3)
 {
  
  printf("Enter Numbers :");
  scanf("%d%d",&num1,&num2);
  printf("%d ^ %d is %d",num1,num2,num1^num2);
 } 
 else if(ch==4)
 {
  
  printf("Enter Number :");
  scanf("%d",&num1);
  printf("Enter no. to Shift Right:");
  scanf("%d",&s);
  printf("%d >> %d id %d",num1,s,num1>>s);
 } 
 else if(ch==5)
 {
  printf("Enter Number :");
  scanf("%d",&num1);
  printf("Enter no. to Shift Left:");
  scanf("%d",&s);
  printf("%d << %d id %d",num1,s,num1<<s);
 } 
 else if(ch==6)
 {
  printf("Enter Number :");
  scanf("%d",&num1);
  printf("~ %d is %d",num1,~num1);
 } 
 else
 {
  printf("Invalid Choice");
 }
 getch();
}