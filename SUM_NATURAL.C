es (15 sloc)  232 Bytes
   
#include<stdio.h>
#include<conio.h>
void main()
{
 int size,i,sum=0;
 clrscr();
 printf("Enter Size :");
 scanf("%d", &size);
for(i=1;i<=size;i++)
 {
  sum=sum+i;
 }
 printf("Sum of First %d Natural No. : %d",size,sum);
 getch();
}