#include<stdio.h>
#include<conio.h>
void main()
{
 int arr[100],i,ch,size,pos;
 clrscr();
 printf("Enter Size :");
 scanf("%d",&size);
 printf("Enter Array :\n");
 for(i=0;i<size;i++)
 {
  scanf("%d",&arr[i]);
 }
 printf("Enter Element To Delete : ");
 scanf("%d",&ch);
 for(i=0;i<size;i++)
 {
  if(arr[i]==ch)
  {
   pos=i;
  }
 }
 for(i=pos;i<size-1;i++)
 {
 arr[i]=arr[i+1];
 }
 printf("Array After Deletion : ");
 for(i=0;i<size-1;i++)
 {
  printf("%d  ",arr[i]);
 }
 getch();
}