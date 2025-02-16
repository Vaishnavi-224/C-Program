#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
        int i = 0, Bills[7] = {0}, zCnt = 0, eCnt = 0, oCnt = 0;

        printf("\n\n Enter Todays Bills => \n ");

        for(i = 0; i < 7; i++)
        {
            printf("\n Enter Bill No %d = ",i+1);
            scanf("%d",&Bills[i]);

            if(Bills[i] == 0)
            {
                zCnt++;
            }
            else if( Bills[i] % 2 == 1 )
            {
                oCnt++;
            }
            else
            {
                eCnt++;
            }
        }

        printf("\n\n Even Bill Amounts Count is = %d .", eCnt);
        printf("\n\n Odd Bill Amounts Count is  = %d .", oCnt);
        printf("\n\n Zero Bill Amounts Count is = %d .", zCnt);

        getch();
        return 0;
}
