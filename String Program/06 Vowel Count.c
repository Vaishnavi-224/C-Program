#include<stdio.h>
#include<conio.h>

int main()
{
  char cSrc[20] = "\0";
  char Vowel_Cnt, i = 0;

  printf("\n Enter a string : ");
  gets(cSrc);

  while(cSrc[i] != '\0')
  {
      if(cSrc[i] == 'a' || cSrc[i] == 'e' || cSrc[i] == 'i' || cSrc[i] == 'o' || cSrc[i] == 'u' || cSrc[i] == 'A' || cSrc[i] == 'E' || cSrc[i] == 'I' || cSrc[i] == 'O' || cSrc[i] == 'U')
      {
          Vowel_Cnt++;
      }
      i++;
  }
  printf("\n Vowel Count of Given string is = %d",Vowel_Cnt);
  getch();
  return 0;
}
