#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
        int i = 0, Bills[7] = {0}, Cnt = 0;

        printf("\n\n Enter Todays Bills => \n ");

        for(i = 0; i < 7; i++)
        {
            printf("\n Enter Bill No %d = ",i+1);
            scanf("%d",&Bills[i]);
        }

        getch();
        ///system("cls");

        for(i = 0; i < 7; i++)
        {
            if( 0 == Bills[i] )
            {
                Cnt++;
            }
        }

        printf("\n\n Bill Amount 0 Found %d Times.", Cnt);

        getch();
        return 0;
}
