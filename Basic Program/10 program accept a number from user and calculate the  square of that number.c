#include<stdio.h>
#include<conio.h>

int main()
{
    int Number,Square;

    printf("\n Enter Number:");
    scanf("%d",&Number);

    Square = Number * Number;

    printf("\n calculate the Square of that Number is %d = %d",Number,Square);

    getch();
    return 0;
}

