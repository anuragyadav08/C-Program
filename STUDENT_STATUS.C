#include<stdio.h>
#include<conio.h>
void main()
{
   char Name[15];
   int ch,Id1,Id2,Pass1,Pass2,Pass3;
   int Eng,Com,Hin,Sc,Sst,Total;
   float Perc;

   clrscr();
   printf("Enter Your Name :");
   gets(Name);

   printf("create Your Id :");
   scanf("%d",&Id1);

   printf("Create Your Password :");
   scanf("%d",&Pass1);

   printf("Re-type Your Password :");
   scanf("%d",&Pass2);

   clrscr();
   if(Pass1==Pass2)
	 {
	     printf("Created Successfully \n");
	     printf("For Your Status : Enter 1 \n");
	     scanf("%d",&ch);

	    if(ch==1)
		{
		     printf("Enter Your Id :");
		     scanf("%d",&Id2);

		     printf("Enter Your Password :");
		     scanf("%d",&Pass3);

		     clrscr();
		     if(Id2==Id1 && Pass3==Pass1)
			{
			    printf("Welcome %s\n",Name);
			    printf("Enter Marks of Following Subject :\n");

			    printf("English :");
			    scanf("%d",&Eng);

			    printf("Hindi :");
			    scanf("%d",&Hin);

			    printf("Computer :");
			    scanf("%d",&Com);

			    printf("Science :");
			    scanf("%d",&Sc);

			    printf("Social Science :");
			    scanf("%d",&Sst);

			    if(Eng>100||Hin>100||Com>100||Sc>100||Sst>100)
			       {
				  printf("Marks Can't be more than 100");
			       }
			    else
			      {
				  Total=(Eng+Hin+Com+Sc+Sst);
				  printf("Total Number =%d\n",Total);
				  Perc=Total/5;
				  printf("Total Percentage = %f \n",Perc);
			     }
			   if(Eng<30||Hin<30||Com<30||Sc<30||Sst<30)
			      {
				printf("Status : FAIL");
			      }
			   else
			      {
				printf("Status : PASS");
			       }
			}


		else
		 {
		  printf("Wrong Id or Password !\n");
		 }
	    }
	 else
	    {
	  printf("Wrong Choice Try Again !");
	 }

	 }
   else
   {
   clrscr();
    printf("Please Enter Same Password in Both place !\n");
   }
   getch();
}