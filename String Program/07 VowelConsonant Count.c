#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20] = "\0";
    char i = 0, vowel_cnt = 0, consonant_cnt = 0, other_cnt = 0;

    printf("\n Enter A String :  ");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        if(cSrc[i] == 'a' || cSrc[i] == 'e' || cSrc[i] == 'i' || cSrc[i] == 'o' || cSrc[i] == 'u' || cSrc[i] == 'A' || cSrc[i] == 'E' || cSrc[i] == 'I' || cSrc[i] == 'O' || cSrc[i] == 'U')
        {
            vowel_cnt++;
        }
        else if((cSrc[i]>=65 && cSrc[i]<=90)||(cSrc[i]>=97 && cSrc[i]<=122))
        {
            consonant_cnt++;
        }
        else
        {
            other_cnt++;
        }
        i++;
    }

    printf("\n Vowel Count of Given String is =%d",vowel_cnt);
    printf("\n Consonant Count of Given String is =%d",consonant_cnt);
    printf("\n other Count of Given String is =%d",other_cnt);

    getch();
    return 0;
}
