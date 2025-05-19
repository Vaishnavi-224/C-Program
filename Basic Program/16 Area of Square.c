#include <stdio.h>
#include <conio.h>

int main()
{
  float side,  ASquare;

  printf("\n Enter a Side :");
  scanf("\n %f",&side);

   ASquare = side * side;

  printf("\n Area of Square is %0.2f=%0.2f",side,ASquare);
  getch();
  return 0;
}

