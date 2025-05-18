#include<stdio.h>
#include<conio.h>

int main()
{

     int CS,Java, Python;
     float  Total,Per;

     printf("\n Enter A Marks in CS :");
     scanf("%d", &CS);

     printf("\n Enter A Marks in Java :");
     scanf("%d", &Java);

     printf("\n Enter A Marks in Python :");
     scanf("%d", &Python);

     Total = CS + Java + Python;
     Per = Total / 3;

     printf("\n Total Marks = %.2f \n",Total);
     printf("\n Percentage = %.2f \n",Per);

     getch();
     return 0;
}
