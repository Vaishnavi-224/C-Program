#include<stdio.h>
#include<conio.h>

int main()
{
  int A=0,B=0,Temp=0;

  printf("\n Enter a Number");
  scanf("%d",&A);

  printf("\n Enter a Number");
  scanf("%d",&B);

  Temp = A;
  A = B;
  B = Temp;

  printf("\n Swapping number is  %d = %d ",A,B,Temp);
  getch();
  return 0;
}
