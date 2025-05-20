#include<stdio.h>
#include<conio.h>

int UpperCase(char[]);

int main()
{
    char cSrc[20] = "\0";

    printf("\n Enter A String :");
    gets(cSrc);

    UpperCase(cSrc);                //Funtion Call

    printf("\n After A String Convert to UpperCase is = %s",cSrc);

    getch();
    return 0;
}

int UpperCase(char src[])
{

  int i = 0;

  while(src[i] != '\0')
  {
      if(src[i]>= 'a' && src[i]<= 'z')
      {
          src[i]=src[i]-32;
      }
      i++;
  }
  return i;
}
