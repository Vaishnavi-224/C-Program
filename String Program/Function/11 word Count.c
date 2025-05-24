#include<stdio.h>
#include<conio.h>
#include<string.h>

int Word_Count(char*cSrc);

int main()
{
    char cSrc[40] = {'\0'};
    int wCnt = 0;

    printf("\n Enter A String : ");
    gets(cSrc);

    wCnt = Word_Count(cSrc);
    printf("\n Word Count in Given String is = %d",wCnt);

    getch();
    return 0;

}

int Word_Count(char *Src)
{
    int i = 0, Cnt = 0;

    while(Src[i] != '\0')
    {
        while(Src[i] == ' ' || Src[i] == '\t' || Src[i] == ',' || Src[i] == '.' )
        {
            i++;
        }
        if(Src[i] != '\0')
        {
            Cnt++;
        }
        while(Src[i] != '\0' && Src[i] != ' ' && Src[i] != '\t' && Src[i] != ',' && Src[i] != '.')
        {
            i++;
        }
    }

    return Cnt;
}
