#include<stdio.h>
#include<conio.h>


int CapitalCount(char[]);

int main()
{

    char cSrc[20] = "";
    int l_cnt = 0;

    printf("\n Enter A String : ");
    gets(cSrc);

    l_cnt = CapitalCount(cSrc);

    printf("\n Capital latter Count is : %d",l_cnt);

    getch();
    return 0;
}

int CapitalCount(char cSrc[20])
{
    int i = 0,l_cnt = 0;

    while(cSrc[i] != '\0')
    {
    if(cSrc[i]>='A' && cSrc[i]<= 'Z')
    {
        l_cnt++;
    }
    i++;
    }
    return l_cnt;
}
