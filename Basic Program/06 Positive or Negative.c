#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    printf("\n Enter  Number ");
    scanf("%d",&No);

    if(No > 0)
    {
        printf("\n Positive No",No);
    }
    else
    {
        printf("\n Negative No",No);
    }

    getch();
    return 0;
}
