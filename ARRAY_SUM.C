#include<stdio.h>
#include<conio.h>
void main()
{
  int a[100],i,rang,sum=0;
  clrscr();
  printf("Enter Range:");
  scanf("%d",&rang);
  printf("\nEnter Element :");
  for(i=0;i<rang;i++)
  {
    scanf("%d",&a[i]);
    sum+=a[i];
  }

    printf("Sum of Element is :  %d",sum);

  getch();
}