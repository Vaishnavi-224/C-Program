#include<stdio.h>
#include<conio.h>

#define size 5

int main()
{
   int i=0,sum=0,Arr[size];


       for(i=0; i<size; i++)
       {
           printf("\n Enter element %d =>",i+1);
           scanf("%d",&Arr[i]);
       }

       getch();
       system("cls");


           for(i=0; i<size;i++)
           {
               sum=sum+Arr[i];
           }

           printf("\n Summation of given array element is => %d.",sum);

       getch();
       return 0;
}
