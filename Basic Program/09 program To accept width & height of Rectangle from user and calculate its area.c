#include<stdio.h>
#include<conio.h>

int main()
{
    int width,height,Area;

    printf("\n Enter a width of rectangle:");
    scanf("%d",&width);

    printf("\n Enter a height of rectangle :");
    scanf("%d",&height);

    Area = width * height;

    printf("\n Area of rectangle is %d * %d = %d",width,height,Area);

    getch();
    return 0;
}
