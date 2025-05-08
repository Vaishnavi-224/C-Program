#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{

     char Fname[20] = {'\0'};
     char Lname[20] = {};

     printf("\n Enter a 1st Name :");
     gets(Fname);
     printf("\n Enter a last name:");
     gets(Lname);

     printf("\n 1st name is = %s !!!",Fname);
     printf("\n last name is = %s $$$",Lname);

     strcpy(Fname,Lname);

     getch();

     printf("\n After copy 1st name is = %s !!! ",Fname);
     printf("\n After copy last name is = %s $$$",Lname);

     getch();
     return 0;
}
