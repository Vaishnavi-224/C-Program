#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
        int i = 0, Bills[7] = {0}, oCnt = 0;

        printf("\n\n Enter Todays Bills => \n ");

        for(i = 0; i < 7; i++)
        {
            printf("\n Enter Bill No %d = ",i+1);
            scanf("%d",&Bills[i]);

            if( Bills[i] % 2 == 1 )
            {
                    oCnt++;
            }
        }

        printf("\n\n Odd Bill Amounts Count is = %d .", oCnt);

        getch();
        return 0;
}
