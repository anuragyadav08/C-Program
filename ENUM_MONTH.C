
#include <stdio.h>
#include<conio.h>
enum months{jan=1,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec};
void main()
{
    enum months w=jan; 
   clrscr();
   printf("Jan : %d\nFeb : %d\nMar : %d\nApr : %d\nMay : %d\nJun : %d\n Jul : %d\nAug : %d\nSep : %d\nOct : %d\nNov : %d\nDec : %d",jan,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec);
   getch();
}
