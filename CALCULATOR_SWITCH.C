#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2,num,ch;
    clrscr();
    printf("Enter Numbers:\n");
    scanf("%d%d",&num1,&num2);
    printf("Enter Choice\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        {
           num=num1+num2;
           printf("%d + %d = %d",num1,num2,num);
           break;
        }
        case 2:
        {
           num=num1-num2;
           printf("%d - %d = %d",num1,num2,num);
           break;
        }
        case 3:
        {
           num=num1*num2;
           printf("%d * %d = %d",num1,num2,num);
           break;
        }
        case 4:
        {
           num=num1/num2;
           printf("%d / %d = %d",num1,num2,num);
           break;
        }
        case 5:
        {  
           num=num1%num2;
           printf("%d mod %d = %d",num1,num2,num);
           break;
        }
        default :
        {
           printf("Invalid Choice !");
        }
    }
    

    getch();
}