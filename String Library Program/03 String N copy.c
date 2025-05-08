#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
  char Fname[10] = {'\0'};
  char Lname[10] = {};


  printf("\n Enter a 1st name :");
  gets(Fname);

  printf("\n Enter a last name :");
  gets(Lname);

  printf("\n Enter a 1st name is = %s",Fname);
  printf("\n Enter a last name is = %s",Lname);

  strncpy(Fname,Lname,2);

  Fname[2] ='\0';

  getch();

  printf("\n After Copy 1st Name is = %s !!!",Fname);
  printf("\n After Copy last Name is = %s $$$",Lname);

  getch();
  return 0;
}
