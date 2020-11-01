//Accept number from user and check whether number is even or odd.

#include<stdio.h>
#include<conio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int);

BOOL ChkEven(int iNo)
{
    printf("\n==================$$$$$$$$$$==================\n");
    if(iNo%2==0)
    {
        printf("\nThe %d is Even Number",iNo);
    }
    else
    {
        printf("\nThe %d is Odd Number",iNo);
    }
    printf("\n\n==================$$$$$$$$$$==================\n");
}
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf(" Enter number \n");
    scanf("%d" ,&iValue);

    bRet = ChkEven(iValue);

    // Display result

    return 0;
}
