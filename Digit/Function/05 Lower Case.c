#include<Stdio.h>
#include<conio.h>

int LowerCase(char[20]);

int main()
{
    char cSrc[20] = "";

    printf("\n Enter A String :");
    gets(cSrc);

    LowerCase(cSrc);
    printf("\After String Convert to LowerCase =%s",cSrc);

    getch();
    return 0;
}

int LowerCase( char Src[])
{

    int i = 0;
    while(Src[i] != '\0')
    {
        if(Src[i] >='A' && Src[i]<='Z')
        {
            Src[i]=Src[i]+32;
        }
        i++;
    }
    return i;
}
