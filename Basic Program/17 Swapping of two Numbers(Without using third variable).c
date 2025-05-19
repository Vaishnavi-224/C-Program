#include<stdio.h>
#include<conio.h>

int main()
{
  int A=0,B=0;

  printf("\n Enter a Number");
  scanf("%d",&A);

  printf("\n Enter a Number");
  scanf("%d",&B);

  A = A + B;
  B = A - B;
  A = A - B;

  printf("\n Swapping number is  %d = %d ",A,B);
  getch();
  return 0;
}
