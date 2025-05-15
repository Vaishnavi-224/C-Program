#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
  char Fname[20] = {'\0'};
  char Lname[20] = {};
  char FullName[40] = "";

  printf("\n Enter a 1st name :");
  gets(Fname);
  printf("\n Enter a last name :");
  gets(Lname);

  printf("\n Enter a 1st name is = %s",Fname);
  printf("\n Enter a last name is = %s",Lname);

  strcat(FullName,Fname);
  strcat(FullName," ");
  strcat(FullName,Lname);

  getch();

  printf("\n After Concat First Name is = %s !!!",Fname);
  printf("\n After Concat Last Name is = %s $$$",Lname);
  printf("\n After Concat FullName is = %s !!!",FullName);

  getch();
  return 0;
}
