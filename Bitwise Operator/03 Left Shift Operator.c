#include<stdio.h>
#include<conio.h>

int main()
{
   int No=0,Res=0;

   printf("\n Enter a Number");
   scanf("%d",&No);

   printf("\n ---------\n");

   Res = No<<4;

   printf("\n Result= %d<<4=%d.",No,Res);

   getch();
   return 0;
}
