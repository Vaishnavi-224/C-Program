#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char cSrc[20] = {'\0'};

    printf("\n Enter a string : ");
    gets(cSrc);

    printf("\n Given String Before is = %s.",cSrc);

    strlwr(cSrc);

    printf("\n Given String After is = %s.",cSrc);

    getch();
    return 0;

}
