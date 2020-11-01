//Accept one number from user and print that number of * on screen.

#include<stdio.h>
#include<conio.h>

void Accept(int);

void Accept(int iNo)
{
    int iCnt = 0;

    printf("\n\n=============||||||||||============== \n\n");
    for( iCnt=1 ; iCnt<=iNo ; iCnt++ )
    {
        printf(" * ");
    }
    printf("\n\n=============||||||||||============== \n");
}
int main()
{
    int iValue = 0;
    iValue = 5;

    Accept(iValue);

    return 0;
}
