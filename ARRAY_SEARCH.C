#include<stdio.h>
#include<conio.h>
void main()
{
int i,rang,a[100],item;
clrscr();
printf(" Enter the Range:");
scanf("%d",&rang);
printf(" Enter the elements:");
for(i=0;i<rang;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the Searching Element :");
scanf("%d",&item);
for(i=0;i<rang;i++)
{
 if(item==a[i])
  printf("%d found at index %d",item,i);
}
getch();
}