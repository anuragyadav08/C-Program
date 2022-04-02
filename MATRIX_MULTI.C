#include<stdio.h>
#include<conio.h>
void main()
{
 int arr[100][100],i,j,k,arr2[100][100],row1,row2,col1,col2,arr1[100][100];
 clrscr();
 printf("Enter No. of Row & Column of 1st Matrix :\n");
 scanf("%d%d",&row1,&col1);
 printf("Insert 1st Matrix Element:\n");
 for(i=0;i<row1;i++)
  {
    for(j=0;j<col1;j++)
      {
	scanf("%d",&arr1[i][j]);
      }
  }
   printf("Enter No. of Row & Column of 2nd Matrix :\n");
 scanf("%d%d",&row2,&col2);
 printf("Insert 2nd Matrix Element:\n");
 for(i=0;i<row2;i++)
  {
    for(j=0;j<col2;j++)
      {
	scanf("%d",&arr2[i][j]);
      }
  }
  if(col1==row2)
  {
   for(i=0;i<row1;i++)
  {
    for(j=0;j<col2;j++)
      {    arr[i][j]=0;
       for(k=0;k<row2;k++)
       {
	arr[i][j]+=arr1[i][k]*arr2[k][j];
       }
      }
  }
 printf("Multiplication:\n\n");
 for(i=0;i<row1;i++)
  {
    for(j=0;j<col2;j++)
      {
	printf("%d  ",arr[i][j]);
      }
     printf("\n");
  }
 }
else
printf(" Column of 1st Matrix Should be same of Row of 2nd Matrix !");
getch();
}