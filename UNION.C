#include<stdio.h>
#include<conio.h>
#include<string.h>
union student{
    int roll;
    char name[20];
    char add[20];
    char qul[20];
};
void main()
{
 union student s;
 clrscr();
 strcpy(s.name,"Anurag Yadav");
 printf("Name :- %s\n",s.name);
 s.roll=8;
 printf("Roll No. :- %d\n",s.roll);
 strcpy(s.add,"Azamgarh 276305");
 printf("Address :- %s\n",s.add);
 strcpy(s.qul,"B Tech. (CSE)");
 printf("Qualification :- %s",s.qul);
 getch();
 
}





