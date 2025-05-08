#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char cSrc[20] = {'\0'};
    int Len = 0;

    printf("\n Enter a String :");
    gets(cSrc);

    Len = strlen(cSrc);

    printf("\n Given String is = %s.",cSrc);
    printf("\n String Length is = %d.",Len);

    getch();
    return 0;
}
