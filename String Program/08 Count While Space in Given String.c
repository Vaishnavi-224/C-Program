#include<stdio.h>
#include<conio.h>

int main()
{
  char cSrc[20] = {'\0'};
  char Space_Cnt = 0, i = 0;

  printf("\n Enter a string");
  gets(cSrc);

  while(cSrc[i] != '\0')
  {
      if(cSrc[i]== ' ')
      {
          Space_Cnt++;
      }
      i++;

  }
  printf(" Count of While Space in Given String is = %d.",Space_Cnt);

  getch();
  return 0;
}
