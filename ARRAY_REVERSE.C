#include<stdio.h>
#include<conio.h>
void main()
{
  int a[100],i,rang;
  clrscr();
  printf("Enter Range:");
  scanf("%d",&rang);
  printf("\nEnter Element :");
  for(i=0;i<rang;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("\nReverse Element:");
  for(i=rang-1;i>=0;i--)
  {
    printf(" %d",a[i]);
  }
  getch();
}