#include<stdio.h>
#include<conio.h>

int main()
{
    float Cel = 0.0, Fht = 0.0;

    printf("\n Enter  Temperature in  Celcius : ");
    scanf("%f",&Cel);

    Fht = ( Cel - 32)  * (5.0/9.0);

    printf("\n\n Temperature %0.2f Fahrenheit = %0.2f Fahrenheit.", Cel,Fht);

    getch();
    return 0;
}

