#include<stdio.h>
#include<conio.h>
int main()
{
    int no=0;
    printf("\n enter a integer number : ");
    scanf("%d",&no);
    if(no==0)
    {
        printf("\n neutral number");
    }
    else if(no%2==0)
    {
        printf("\n even number");
    }
    else
    {
        printf("\n odd number");
    }
    printf("\n\n Thank you");
    getch();
    return 0;
}
