#include<stdio.h>
#include<conio.h>


void VowelConsonant_Count(char*,int*,int*,int*);

int main()
{
   int V_Cnt = 0,C_Cnt = 0, O_Cnt = 0;
   char cSrc[20] = {'\0'};


   printf("\n Enter A String :");
   gets(cSrc);

   VowelConsonant_Count(cSrc,&V_Cnt,&C_Cnt,&O_Cnt);


   printf("\n Vowel Count of Given String is =%d",V_Cnt);
   printf("\n Consonant Count of Given String is =%d",C_Cnt);
   printf("\n other Count of Given String is =%d", O_Cnt);


   getch();
   return 0;
}


void VowelConsonant_Count(char* cSrc,int*V,int*C,int*O)
{
    int i = 0;

    while(cSrc[i] != '\0')
    {
        if(cSrc[i]=='A' || cSrc[i]=='E' || cSrc[i]=='I' ||cSrc[i]=='O' ||cSrc[i]=='U' ||cSrc[i]=='a' ||cSrc[i]=='e' ||cSrc[i]=='i' ||cSrc[i]=='o' ||cSrc[i]=='u')
        {
            (*V)++;
        }
        else if((cSrc[i]>=65 && cSrc[i]<=90) || (cSrc[i]>=97 && cSrc[i]<=122))
        {
            (*C)++;
        }
        else
        {
            (*O)++;
        }
        i++;
    }
    return;
}
