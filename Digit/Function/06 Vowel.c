#include<stdio.h>
#include<conio.h>

int VowelCount (char[]);

int main()
{
    char cSrc[20] = "";
    int l_Cnt = 0;

    printf("\n Enter A String:");
    gets(cSrc);

    l_Cnt = VowelCount(cSrc);
    printf("\n Vowel Count Of Given String %d",l_Cnt);

    getch();
    return 0;
}


int VowelCount(char src[])
{
    int V_Cnt = 0, i = 0;

    while(src[i]!='\0')
    {
        if(src[i]=='a'|| src[i]=='e'|| src[i]=='i'|| src[i]=='o'|| src[i]=='u')
        {
            V_Cnt++;
        }
        i++;
    }
    return V_Cnt;
}
