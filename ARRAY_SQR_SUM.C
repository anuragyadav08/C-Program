#include<stdio.h>
#include<conio.h>
void main()
{
 int arr[100],i,sum=0,avg,size;
 clrscr();
 printf("Enter Size: ");
 scanf("%d",&size);
 printf("Insert Elements OF Array :\n");
 for(i=0;i<size;i++)
 {
  scanf("%d",&arr[i]);
 }
 for(i=0;i<size;i++)
 {
  sum+=arr[i]*arr[i];
 }
 printf("Sum of Square of Elements = %d\n",sum);
 avg=sum/size;
 printf("Average of Square of Elements of Array = %d",avg);
 getch();
}