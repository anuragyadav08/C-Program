#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char a[100];
 int i,count1=0,count2=0,count3=0;
 clrscr();
 printf("Enter String :");
 gets(a);
 for(i=0;a[i]!='\0';i++)
 {
 if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
 {
  count1++;
 }
 else if(a[i]>='0'&& a[i]<='9')
 {
 count2++;
 }
 else
 {
 count3++;
 }
 }
 printf("Alpha : %d\nNum : %d\nSpecial Char : %d",count1,count2,count3);
 getch();
}