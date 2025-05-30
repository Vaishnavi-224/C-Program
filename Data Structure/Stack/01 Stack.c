#include<stdio.h>
#include<conio.h>

#define Size 5

int Stack[Size] = {};
int Top = 0;

int Is_Stack_Empty();
int Is_Stack_Full();
void Push(int No);
void Pop();
void Display_Stack();
void Search_Stack(int Num);

int main()
{
    int No=0;

    Push(32);
    Push(25);
    Push(74);
    Push(12);
    getch();

    Display_Stack();

    Search_Stack(25);
    getch();
    Search_Stack(74);
    getch();

    return 0;
}

int Is_Stack_Empty()
{
    if(Top==0)
    {
        return 1;
    }
    return 0;
}



int Is_Stack_Full()
{
    if(Top == Size)
    {
        return 1;
    }
    return 0;
}



void Push(int No)
{
    if(Is_Stack_Full())
    {
        printf("\n Stack is already Full,Can't Insert New Element..!");
    }
    else
    {
        Stack[Top]=No;
        Top++;
        printf("\n Element %d is Inserted at %d Index Successfully",No,Top-1);
    }
    return;
}

void Pop()
{
    if(Is_Stack_Empty())
    {
        printf("\n Stack is already Empty,Can't Delete any Element..!");
    }
    else
    {
        Top--;
        printf("\n Deleted Element From Stack is=%d.",Stack[Top]);
        Stack[Top]=0;


    }
    return;
}

void Display_Stack()
{
    int i = 0;

    if(Is_Stack_Empty())
    {
        printf("\n Stack is already Empty So We Can't Display any Element..");
    }
    else
    {
        printf("\n\n Current Elements in STACK are => \n");

        for(i = Top-1; i>=0; i--)
        {
            printf("\t\t |%3d|\n",Stack[i]);
        }
}
    return;
}

void Search_Stack(int Num)
{

    int i = 0;

    if(Is_Stack_Empty())
    {
        printf("\n Stack is Already Empty, Searching is Illogical");
    }
    else
    {
        for(i = 0; i < Top; i++)
        {
            if(Stack[i] == Num)
            {
                printf("\n Element %d 1st Time at Element. No %d in Given Stack(Bottom to Top).",Num,i+1);
                break;
            }
        }

    }
        if (i == Top)
    {
        printf("\n %d Element Not Present in Array.",Num);
    }
    return;

}







