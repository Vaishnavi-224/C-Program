#include<stdio.h>
#include<conio.h>


int main()
{
    float KM = 0.0,Meters =0.0;

    printf("\n Enter Length in kilometer :");
    scanf("%f",&KM);

    Meters = KM * 1000;
     printf("\n %0.2f KM = %0.2f",KM,Meters);

     getch();
     return 0;
}
