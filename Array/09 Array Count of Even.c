#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
        int i = 0, Bills[7] = {0}, eCnt = 0;

        printf("\n\n Enter Todays Bills => \n ");

        for(i = 0; i < 7; i++)
        {
            printf("\n Enter Bill No %d = ",i+1);
            scanf("%d",&Bills[i]);
        }

        getch();

        for(i = 0; i < 7; i++)
        {
            if( (Bills[i] != 0) && ( Bills[i] % 2 == 0 ))
            {
                    eCnt++;
            }
        }

        printf("\n\n Even Bill Amounts Count is = %d .", eCnt);

        getch();
        return 0;
}
