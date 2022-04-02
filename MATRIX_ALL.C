#include<stdio.h>
#include<conio.h>
void main()
{
 int arr[100][100],arr1[100][100],arr2[100][100];
 int ch,i,j,k,col,row,col1,col2,row1,row2;
 clrscr();
 printf("For Additon Enter: 1\nFor Subtraction Enter: 2\nFor Muliplication Enter: 3\nFor transpose Enter: 4\nEnter Choice :");
 scanf("%d",&ch);
 if(ch==1)
 {
   printf("Enter No. of Row & Column of 1st matrix :\n");
 scanf("%d%d",&row1,&col1);
 printf("Insert 1st Matrix Element:\n");
 for(i=0;i<row1;i++)
  {
    for(j=0;j<col1;j++)
      {
	scanf("%d",&arr1[i][j]);
      }
  }
   printf("Enter No. of Row & Column of 2nd matrix :\n");
 scanf("%d%d",&row2,&col2);
 printf("Insert 2ud matrix Element:\n");
 for(i=0;i<row2;i++)
  {
    for(j=0;j<col2;j++)
      {
	scanf("%d",&arr2[i][j]);
      }
  }
  if(row1==row2 && col1==col2)
  {
   for(i=0;i<row1;i++)
  {
    for(j=0;j<col1;j++)
      {
	arr[i][j]=arr1[i][j]+arr2[i][j];
      }
  }
 printf("Addition:\n\n");
 for(i=0;i<row1;i++)
  {
    for(j=0;j<col1;j++)
      {
	printf("%d  ",arr[i][j]);
      }
     printf("\n");
  }
 }
else
printf("Row & Column Should be same of both Matrices!");
 }
 else if(ch==2)
 {
  
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
  if(row1==row2 && col1==col2)
  {
   for(i=0;i<row1;i++)
  {
    for(j=0;j<col1;j++)
      {
	arr[i][j]=arr1[i][j]-arr2[i][j];
      }
  }
 printf("Subtraction:\n\n");
 for(i=0;i<row1;i++)
  {
    for(j=0;j<col1;j++)
     {
	printf("%d  ",arr[i][j]);
      }
     printf("\n");
  }
 }
else
printf("Row & Column Should be same of both Matrices !");

 }
 else if(ch==3)
 {
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

 }
 else if(ch==4)
 {
   printf("Enter No. of Row & Column:\n");
 scanf("%d%d",&row,&col);
 printf("Enter %d*%d Matrix A:\n",row,col);
 for(i=0;i<row;i++)
  {
    for(j=0;j<col;j++)
      {
	scanf("%d",&arr[i][j]);
      }
  }
 printf("Matrix :\n\n");
 for(i=0;i<row;i++)
  {
    for(j=0;j<col;j++)
      {
	printf("%d  ",arr[i][j]);
      }
     printf("\n");
  }
   for(i=0;i<col;i++)
  {
    for(j=0;j<row;j++)
      {
	arr2[i][j]=arr[j][i];
      }
  }
 printf("Transpose Matrix :\n\n");
 for(i=0;i<col;i++)
  {
    for(j=0;j<row;j++)
      {
	printf("%d  ",arr2[i][j]);
      }
     printf("\n");
  }

 }
 else
 printf("Invalid Choice !");
 getch();
}