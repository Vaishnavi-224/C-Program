#include<stdio.h>
#include<conio.h>

int SmallCount(char[]);

int main()
{
    char cSrc[20] = "";
    int l_Cnt = 0;

    printf("\n Enter A String : ");
    gets(cSrc);

    l_Cnt = SmallCount(cSrc);
    printf("\n  Small letter Count is = %d",l_Cnt);

    getch();
    return 0;
}

int SmallCount(char cSrc[])
{
    int i = 0,l_Cnt = 0;

    while(cSrc[i] != '\0')
    {
    if(cSrc[i]>='a' && cSrc[i]<='z')
    {
        l_Cnt++;
    }
    i++;
    }
    return l_Cnt;
}
