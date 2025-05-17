#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0, No2 = 0, No3 = 0, No4 = 0, No5 = 0,Sum = 0;

    printf("\n Enter a 1st Number :");
    scanf("%d",&No1);

    printf("\n Enter a 2nd Number :");
    scanf("%d",&No2);

    printf("\n Enter a 3rd Number :");
    scanf("%d",&No3);

    printf("\n Enter a 4th Number :");
    scanf("%d",&No4);

    printf("\n Enter a 5th Number :");
    scanf("%d",&No5);


    Sum = No1 + No2 + No3 + No4 + No5;

    printf("\n Addition of Two Numbers is %d + %d + %d + %d + %d = %d",No1,No2,No3,No4,No5,Sum);

    getch();
    return 0;


}
