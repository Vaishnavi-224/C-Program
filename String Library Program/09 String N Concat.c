#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{

    char Fname[20] = {'\0'};
    char NickName[40] = "";

    printf("\n Enter a 1st name : ");
    gets(Fname);

    printf("\n 1st name is = %s !!!", Fname);

    strncat(NickName,Fname,4);

    getch();

    printf("\n After NConcat First Name is = %s !!!",Fname);
    printf("\n After NConcat Nick Name is = %s $$$",NickName);

    getch();
    return 0;
}
