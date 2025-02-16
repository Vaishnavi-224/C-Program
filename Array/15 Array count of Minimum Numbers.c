#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
        int i = 0, Bills[7] = {0}, Min = 0;

        printf("\n\n Enter Todays Bills => \n ");

        for(i = 0; i < 7; i++)
        {
            printf("\n Enter Bill No %d = ",i+1);
            scanf("%d",&Bills[i]);

            /// Logic to Find Min

            if( ( i == 0 ) || ( Bills[i] < Min ))
            {
                Min = Bills[i];
            }
        }

        printf("\n\n Min Bill Amount is = %d .", Min);

        getch();
        return 0;
}
