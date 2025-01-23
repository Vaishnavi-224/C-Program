#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define PCount 5

struct Product
{

     int P_Id;
     char P_Name[20];
     float P_P_Price;
     float P_S_Price;
};
int main()
{

    int i ;
    struct Product Prod[PCount];


    printf("\n\n Accepting Product Details => \n");

    for(i = 0; i < PCount; i++)
    {



        printf("\n Enter Product  Id = ");
        scanf("%d",&Prod[i].P_Id);

        fflush(stdin);

        printf("\n Enter Product  Name = ");
        gets(Prod[i].P_Name);

        printf("\n Enter Product  Sale Price = ");
        scanf("%f",&Prod[i].P_S_Price);

        printf("\n Enter Product  Purchase Price = ");
        scanf("%f",&Prod[i].P_P_Price);

}
getch();

system("cls");



printf("\n Display Product Details => \n");

for(i = 0; i<PCount;i++)
{
    printf("\n Display Product Details =>",i+1);


     printf("\n Id = %d.", Prod[i].P_Id);
     printf("\n Name = %s.",Prod[i].P_Name);
     printf("\n sale Price = %f." ,Prod[i].P_S_Price);
     printf("\n Purchase Price = %f.", Prod[i].P_P_Price);


     printf("\n======================\n");

     getch();
     return 0;
}
}
