#include<stdio.h>
#include<conio.h>

int main()
{
    int Number,Cube;

    printf("\n Enter Number:");
    scanf("%d",&Number);

    Cube = Number * Number * Number;

    printf("\n calculate the Cube of that Number is %d = %d",Number,Cube);

    getch();
    return 0;
}

