#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    char cSrc[50]={'\0'};
    int Len = 0;

    printf("\n Enter a string : ");
    gets(cSrc);

    Len = printf("\n %s",cSrc);
    getch();

    //system("cls");

    printf("\n Length of given string <%s> is %d",cSrc,Len);

    getch();
    return 0;
}
