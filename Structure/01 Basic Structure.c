#include<stdio.h>
#include<conio.h>


struct stud
{
    int RollNo;
    char Name[20];
    float Per;
};


int main()
{
    int Num;
    struct stud s1;

    printf("\n size of Integers is => %d.", sizeof(int));
    printf("\n size of Structure Student Object / Instance is => %d.",sizeof(struct stud));

    printf("\n Size of Integers is => %d.", sizeof(Num));
    printf("\n size of Structure Student Object / Instance is => %d.",sizeof(Num));

    getch();
    return 0;
}
