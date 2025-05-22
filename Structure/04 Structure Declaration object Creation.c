#include<stdio.h>
#include<conio.h>
#include<string.h>


int main()
{

    struct stud
    {

        int RNo;
        char Name[20];
        long long int Mob_No;
        float Income;
    };

    struct stud std1;

    std1.RNo=14;
    strcpy(std1.Name, "vaish");
    std1.Mob_No=9922329565;
    std1.Income=5000;


    printf("\n 1st Student RNo=%d.",std1.RNo);
    printf("\n 1st Student Name=%s.",std1.Name);
    printf("\n 1st Student Mob_No=%lld.",std1.Mob_No);
    printf("\n 1st Student Income=%f.",std1.Income);

    getch();
    return 0;
}
