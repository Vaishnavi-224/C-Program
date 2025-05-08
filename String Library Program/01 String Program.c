#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{

        char cSrc[20] = {'\0'};
        char cDest[20] = {};

        printf("\n Enter a string :");
        gets(cSrc);

        printf("\n source string is = %s !!!",cSrc);
        printf("\n Destination string is = %s $$$",cDest);

        strcpy(cDest,cSrc);

        printf("\n Given string is = %s !!!",cSrc);

        printf("\n Copied to New string is = %s $$$",cDest);

        getch();
        return 0;
}
