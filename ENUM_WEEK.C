
#include <stdio.h>
#include<conio.h>
enum week{Sun,Mon,Tue,Wed,Thu,Fri,Sat};
void main()
{
    enum week w=Sun; 
    clrscr();
    printf("Week\n\nSun : %d\nMon : %d\nTue : %d\nWed : %d\nThu : %d\nFri : %d\nSat : %d ",Sun,Mon,Tue,Wed,Thu,Fri,Sat);
   getch();
}
