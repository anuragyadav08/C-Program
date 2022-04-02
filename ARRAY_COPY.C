#include<stdio.h>
#include<conio.h>
void main()
{
  int arr1[100],arr2[100],i,rang;
  clrscr();
  printf("Enter Range:");
  scanf("%d",&rang);
  printf("\nEnter Element :");
  for(i=0;i<rang;i++)
  {
    scanf("%d",&arr1[i]);
  }
  printf("\nOutput Element:");
  for(i=0;i<rang;i++)
  {
    printf(" %d",arr1[i]);
  }


  for(i=0;i<rang;i++)
  {
  arr2[i]=arr1[i];
  }
  printf("\nCopy Element:");
  for(i=0;i<rang;i++)
  {
    printf(" %d",arr2[i]);
  }
  getch();

}