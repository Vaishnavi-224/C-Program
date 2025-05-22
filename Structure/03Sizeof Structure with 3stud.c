#include<stdio.h>
#include<stdio.h>

struct stud1
{
     char Nm[8];
     char City[10];
     int RNo;
     long int Mob_No;
     float Per;
};
struct stud2
{


     int RNo;
     char Nm[8];
     long int Mob_No;
     char City[10];
     float Per;

};
struct stud3
{
     char Nm[8];
     int RNo;
     char City[10];
     long int Mob_No;
     float Per;
};

   int main()
   {
       struct stud1 std1;
       struct stud2 std2;
       struct stud3 std3;

       printf("\n size of 1st structure object = %d.", sizeof(std1));
       printf("\n size of 2nd structure object = %d.", sizeof(std2));
       printf("\n size of 3rd structure object = %d.", sizeof(std3));


      getch();
      return 0;
   }

