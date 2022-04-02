#include<stdio.h>
#include<conio.h>
void main()
{
 int arr[3][3],i,j,row,col;
 clrscr();
 printf("Enter No. of Row & Column:\n");
 scanf("%d%d",&row,&col);
 printf("Enter %d*%d Array:\n",row,col);
 for(i=0;i<row;i++)
  {
    for(j=0;j<col;j++)
      {
	scanf("%d",&arr[i][j]);
      }
  }
 printf("2D Array :\n\n");
 for(i=0;i<row;i++)
  {
    for(j=0;j<col;j++)
      {
	printf("%d  ",arr[i][j]);
      }
     printf("\n");
  }
getch();
}