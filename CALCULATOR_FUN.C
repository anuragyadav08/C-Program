#include<stdio.h>
#include<conio.h>
int add(int num1,int num2)
{
 int num;
 printf("Enter Numbers : ");
 scanf("%d%d",&num1,&num2);
 num=num1+num2;
 return num;
}
int sub(int num1,int num2)
{
 int num;
 printf("Enter Numbers : ");
 scanf("%d%d",&num1,&num2);
 num=num1-num2;
 return num;
}
int mul(int num1,int num2)
{
 int num;
 printf("Enter Numbers : ");
 scanf("%d%d",&num1,&num2);
 num=num1*num2;
 return num;
}
int divi(int num1,int num2)
{
 int num;
 printf("Enter Numbers : ");
 scanf("%d%d",&num1,&num2);
 num=num1/num2;
 return num;
}
int mod(int num1,int num2)
{
 int num;
 printf("Enter Numbers : ");
 scanf("%d%d",&num1,&num2);
 num=num1%num2;
 return num;
}
void main()
{
 int ch,res,a,b;
 clrscr();
 printf("Enter Choice : \nAddition : 1\nSubtraction : 2\nMultiplication : 3\nDivision : 4\nModulus : 5\n");
 scanf("%d",&ch);
 switch(ch)
 {
  case 1:

	 {
	  res=add(a,b);
	  printf("Addition = %d",res);
	  break;
	 }
  case 2:

	 {
	  res=sub(a,b);
	  printf("Subtraction = %d",res);
	  break;
	 }
  case 3:

	 {
	  res=mul(a,b);
	  printf("Multiplication = %d",res);
	  break;
	 }
  case 4:

	 {
	  res=divi(a,b);
	  printf("Division = %d",res);
	  break;
	 }	 
  case 5:

	 {
	  res=mod(a,b);
	  printf("Modulus = %d",res);
	  break;
	 }
 default :
         printf("Invalid Choice !");
 }

 getch();
}





