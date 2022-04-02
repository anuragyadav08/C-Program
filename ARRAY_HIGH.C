#include<stdio.h>
#include<conio.h>
void main()
{
  int ch,arr[100],size,temp,i,j,n;
  clrscr();

   printf("Enter Size of Array :");
   scanf("%d",&size);
   printf("Enter Array :");
   for(i=0;i<size;i++)
   {
     scanf("%d",&arr[i]);
   }

 
   for(i=0;i<size;i++)
   {
     for(j=i+1;j<size;j++)
      {
	 if(arr[i]>arr[j])
	 {
	   temp=arr[i];
	   arr[i]=arr[j];
	   arr[j]=temp;
	 }
      }
   }
   printf("Enter value of n  to find Nth highest Element in Array  : ");
   scanf("%d",&n);
   printf("%dth highest Element in Array %d",n,arr[size-n]);
 getch();
}