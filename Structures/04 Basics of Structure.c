#include<stdio.h>
#include<conio.h>
#include<string.h>


struct Stud
{
    int RNo;
    char Name[20];
    float Per
};

int main()
{
    struct Stud std1={22,"sonu", 80.15432};
    struct Stud std2;


    std2.RNo=24;
    strcpy(std2.Name,"vaishu");
    std2.Per = 82.12345;

    printf("\n\n 1st student Info is =>");

    printf("\n Roll Number = %d.",std1.RNo);
    printf("\n Name = %s.",std1.Name);
    printf("\n Per = %f.",std1.Per);

    printf("\n\n 2nd student Info is =>");

    printf("\n Roll Number = %d.",std2.RNo);
    printf("\n Name = %s.",std2.Name);
    printf("\n Per = %f.",std2.Per);

   getch();
   return 0;
}

