#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>


struct stud
{
     int Roll_No;
     char Name[20];
     float per;
};

int main()
{
    int i = 0;
    struct stud std[3];


    for(i=0;i<3;i++)
    {
        printf("\n\n Enter Student No %d Details = ", i+1);


        printf("\n Enter Roll No = ");
        scanf("%d",&std[i].Roll_No);

        fflush(stdin);

        printf("\n Enter Name = ");
        gets(std[i].Name);

        fflush(stdin);

        printf("\n Enter Student percentage = ");
        scanf("%f",&std[i].per);
    }

    getch();
    system("cls");


    printf("\n-------------********------------");

    printf("\n\t Student Database\n");


    for(i=0;i<3;i++)
    {
        printf("\n\n %d Student Information is ",i+1);

        printf("\n Roll No  =%d.",std[i].Roll_No);
        printf("\n Name  =%s.",std[i].Name);
        printf("\n Percentage  =%0.2f.",std[i].per);
    }

     printf("\n-------------********------------");

     getch();
     return 0;

}


