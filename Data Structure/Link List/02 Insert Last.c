#include<stdio.h>
#include<conio.h>


struct Node
{
    int Data;
    struct Node *Next;
};

void Insert_Last(struct Node **First,int No)
{
    struct Node *NewN = NULL;

    NewN = (struct Node*)malloc(sizeof(struct Node));

    NewN ->Data = No;
    NewN->Next = NULL;

    if(NULL == *First)
    {
        *First = NewN;
        printf("\n Inside if block of insert Last");
    }
    else
    {
        struct Node *Temp = *First;

        while (Temp -> Next != NULL)
        {
            Temp = Temp -> Next;
        }
        Temp -> Next = NewN;
    }
    printf("\n\n %d Element Inserted at Last Position Successfully",No);
    return;
}

void Display_LL(struct Node*First)
{
    if(NULL == First)
    {
        printf("\n Given Link List Already Empty");
    }
    else
    {
        printf("\n Element in Given Link List are \n");

        while(First !=NULL)
        {
            printf("\n %d ->",First ->Data);
            First = First ->Next;
        }
        printf("\n NULL");
    }
    return;
}


int main()
 {
     int Num = 101;
     struct Node *Head = NULL;

     Insert_Last(&Head,Num);

     Insert_Last(&Head,95);
     Insert_Last(&Head,21);
     Insert_Last(&Head,17);

     getch();
     system("cls");
     Display_LL(Head);

     getch();
     return 0;
 }
