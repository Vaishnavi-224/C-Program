#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20]= "";
    int i = 0;

    printf("\n Enter a String : ");
    gets(cSrc);

    while(cSrc[i] !='\0')
    {
        i++;
    }

    printf("\n String Length is = %d.", i);

    getch();
    return 0;
}
