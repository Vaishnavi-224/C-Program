#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define size 10

int main()
{

    int i=0,Num[size]={},sum=0;
    printf("\n Enter Elements");
    for(i=0;i<size;i++)

    {
        printf("\n Enter Element No %d:",i+1);
        scanf("%d",&Num[i]);
        sum = sum + Num[i];
    }
    system ("cls");
    printf("\n You Entered Are These");
    for(i=0;i<size;i++)
    {

        printf("\n Value of Element %d = %d",i+1,Num[i]);
    }
    printf("\n Summation of all element is =%d",sum);

    getch();
    return 0;
}
