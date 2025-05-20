#include<stdio.h>
#include<conio.h>

int DigitCount(char[]);

int main()
{

  int L_Cnt = 0;
  char cSrc[20] = "";

  printf("\n Enter A String : ");
  gets(cSrc);

  L_Cnt = DigitCount(cSrc);


  printf("\n Digit Count of Given String Is : %d",L_Cnt);

  getch();
  return 0;
}
  int DigitCount (char Src[])
  {
      int i = 0, Len = 0;

      while(Src[i] != '\0')
      {
          if(Src[i] >='0'  && Src[i] <='9')
          {
              Len++;

          }
          i++;
      }

      return Len;
  }
