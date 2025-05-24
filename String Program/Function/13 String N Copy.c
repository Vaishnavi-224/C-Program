#include<stdio.h>
#include<conio.h>

 int strcpyF(char* , char* ,int);

 int main()
 {
     char cSrc[20] = "",cDest[20] = "";


     printf("\n Enter Source String : ");
     gets(cSrc);

     strcpyF(cDest,cSrc,7);

     printf("\n Source String is = %s.",cSrc);
     printf("\n Copied String is = %s.",cDest);



     getch();
     return 0;
 }

 int strcpyF(char*Dest, char*Src ,int c)
 {

     int i = 0;

     while(Src[i] != '\0')
     {
         Dest[i] = Src[i];

           i++;
           c--;
     }

     Dest[i] = '\0';

     return i;
 }

