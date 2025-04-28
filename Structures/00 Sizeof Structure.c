#include<stdio.h>
#include<conio.h>

struct stud
{
     char Name[8];
     char City[10];
     int RNO;
     float Per;
}

int main()
{
    struct stud std;

    printf("\n Size of Structure Object : %d.", sizeof(std));

    getch();
    return 0;

}
