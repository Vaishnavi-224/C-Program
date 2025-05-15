#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Size 5

void Accept_Elements(int[]);
void Display_Elements(int[]);
int Count_of_Evens(int[]);

int main()
{
    int Num[Size] = {}, ECnt = -1;

    Accept_Elements(Num);
    system("cls");
    Display_Elements(Num);

    getch();

    ECnt = Count_of_Evens(Num);

    printf("\n OUTPUT count of Even Numbers in Given Array is = %d.",ECnt);

    getch();
    return 0;
}

int Count_of_Evens(int Arr[])
{
    int i = 0,Cnt = 0;

    for(i = 0; i < Size; i++)
    {
               if(Arr[i] % 2 == 0)
               {
                   Cnt++;
               }
    }

    return Cnt++;
}

void Accept_Elements(int Arr[])
{
    int i = 0;

    printf("\n Enter Elements To be placed in Array => \n");

    for(i = 0; i < Size; i++)
    {
        printf("\n Enter Value for Element Number %d = ", i+101);
        scanf("%d",&Arr[i]);
    }

    return;
}

void Display_Elements(int Fun[])
{
         int i = 0;

         printf("\n ===========******===========\n");
         printf("\n Elements is Given Array are => \n");

         for(i = 0; i < Size; i++)
         {
                  printf("\n Value of Elements %d= %d.",i+1, Fun[i]);

         }

         printf("\n ==========******===========\n");

         return;

}




























