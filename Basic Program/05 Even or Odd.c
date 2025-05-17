#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    printf("\n Enter  Number ");
    scanf("%d",&No);

    if(No%2==0)
    {
        printf("\n Even No",No);
    }
    else
    {
        printf("\n Odd No",No);
    }

    getch();
    return 0;
}
