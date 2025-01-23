#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct stud
{

    int RNo;
    char Name[24];
    float Per;
};


int main()
{
    struct stud std3;


    printf("\n\n Enter 3rd student Info");

    printf("\n\n  Enter Roll Number = ");
    scanf("%d",&std3.RNo);
     fflush(stdin);

     printf("\n Enter Name = ");
     ///scanf("%[^\n]",&Std3.Name);
     gets(std3.Name);

     printf("\n\n Enter Percentage = ");
     scanf("%f",&std3.Per);

     printf("\n\n Enter 3rd Student Info =>");


     printf("\n Roll Number = %d.",std3.RNo);
     printf("\n Name = %s.",std3.Name);
     printf("\n Percentage = %f.",std3.Per);

     getch();
     return 0;
}
