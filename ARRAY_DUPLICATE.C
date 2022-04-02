#include<stdio.h>
#include<conio.h>
void main()
{
int arr[100],i,j,size;
clrscr();
printf("Enter Size of Array :");
scanf("%d",&size);
printf("Enter Array :");
for(i=0;i<size;i++)
 {
  scanf("%d",&arr[i]);
 }
printf("Duplicate Element :");
for(i=0;i<size;i++)
 {
  for(j=i+1;j<size;j++)
   {
      if(arr[i]==arr[j])
      {
       printf("%d ",arr[j]);
      }
   }
 }

getch();
}