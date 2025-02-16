#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
        int i = 0, Bills[7] = {0}, Max = 0, SMax = 0;

        printf("\n\n Enter Todays Bills => \n ");

        for(i = 0; i < 7; i++)
        {
            printf("\n Enter Bill No %d = ",i+1);
            scanf("%d",&Bills[i]);
        }

        /// Logic to Find Max
        for(i = 0; i < 7; i++)
        {
            if( ( i == 0 ) || ( Bills[i] > Max ))
            {
                Max = Bills[i];
            }
        }

        /// Logic to Find 2nd Max
        for(i = 0; i < 7; i++)
        {
            if( (Bills[i] != Max ) && ( (SMax != 0) || (Bills[i] > SMax) ) )
            {
                SMax = Bills[i];
            }
        }

        printf("\n\n 1st Max Bill Amount is = %d .", Max);
        printf("\n\n 2nd Max Bill Amount is = %d .", SMax);

        getch();
        return 0;
}
