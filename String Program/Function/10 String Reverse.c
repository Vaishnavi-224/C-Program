#include<stdio.h>
#include<conio.h>


int strlenF(char *);
void strrevF(char*);

int main()
{
    char cSrc[20]={'\0'};

    printf("\n Enter A String : ");
    gets(cSrc);

    strrevF(cSrc);

    printf("\n Reversed String is : %s",cSrc);

    getch();
    return 0;
}

int strlenF(char *Src)
{
    int cnt = 0;

    while(*Src != '\0')
    {
        Src++;
        cnt++;
    }

    return cnt;
}

void strrevF(char *cSrc)
{
    char ch = '\0';
    char *Temp = cSrc + strlenF(cSrc) -1;

    while(cSrc < Temp)
    {
        ch = *cSrc;
       *cSrc = *Temp;
       *Temp = ch;

       cSrc++;
       Temp--;
    }

    return;

}


