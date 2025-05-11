#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char cSrc[20] ={'\n'};

    printf("\n Enter a String : ");
    gets(cSrc);

    printf("\n Given String Before = %s ! " , cSrc);

    strrev(cSrc);

    printf("\ Given String After = %s ! ",cSrc);

    getch();
    return 0;
}
