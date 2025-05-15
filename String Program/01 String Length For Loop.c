#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
   char cSrc[20]="";
   int i = 0;

   printf("\n enter a string : ");
   gets(cSrc);

   for(i = 0; cSrc[i]!= '\0'; i++);

   printf("\n Length is Given string is =%d.",i);

   getch();
   return 0;
}
