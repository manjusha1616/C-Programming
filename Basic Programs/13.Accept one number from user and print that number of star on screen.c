//Accept one number from user and print that number of * on screen.

#include<stdio.h>
#include<conio.h>

void Display(int);

void Display(int iNo)
{
    int iCnt = 0;
    // Write Updater

    printf("\n==================$$$$$$$$$$==================\n\n");
    while( iCnt < iNo )
    {
        printf(" * ");
        iCnt++ ;
    }
    printf("\n\n==================$$$$$$$$$$==================\n");
}
int main()
{
    int iValue = 0;

    printf(" Enter number \n");
    scanf("%d" ,&iValue);

    Display(iValue);

    return 0;
}
