#include<stdio.h>
#include<conio.h>
void main()
{
  int ch,arr[100],size,temp,i,j;
  clrscr();

   printf("Enter Size of Array :");
   scanf("%d",&size);
   printf("Enter Array :");
   for(i=0;i<size;i++)
   {
     scanf("%d",&arr[i]);
   }

  printf("Enter 1 for Sorting Array in Acending Order:\n");
  printf("Enter 2 for Sorting Array in Decending Order:\n");
  scanf("%d",&ch);
  if(ch==1)
 {
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
   printf("Sorted Array in Acending Order : ");
   for(i=0;i<size;i++)
    {
      printf("%d ",arr[i]);
    }
 }
  else if(ch==2)
 {

   for(i=0;i<size;i++)
   {
     for(j=i+1;j<size;j++)
      {
	 if(arr[i]<arr[j])
	 {
	   temp=arr[i];
	   arr[i]=arr[j];
	   arr[j]=temp;
	 }
      }
   }
    printf("Sorted Array in Decending Order : ");
   for(i=0;i<size;i++)
    {
      printf("%d ",arr[i]);
    }
 }
 else
 {
  printf("Invalid Choice !");
 }
 getch();
}