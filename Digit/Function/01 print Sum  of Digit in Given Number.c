#include<stdio.h>
#include<conio.h>

int Digit_Sum(int);

int main()
{
  int No = 0, Sum = 0;

  printf("\n Enter a +ve Integer Number To Find Digit Sum = ");
  scanf("%d",&No);

  Sum = Digit_Sum(No);

  printf("\n\n Sum of Digit in %d is  %d.",No,Sum);

  getch();
  return 0;
}

int Digit_Sum(int Num)
{
    int Dig = 0, dsum = 0;

    while(Num > 0)
    {
        Dig = Num % 10;
        dsum = dsum + Dig;
        Num = Num / 10;
    }

    return dsum;
}
