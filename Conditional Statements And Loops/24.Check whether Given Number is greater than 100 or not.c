/*Write a program which accept one number from user and check whether that number is greater than 100 or not.
Input : 101
Output : Greater
Input : 39
Output : Smaller*/

#include<stdio.h>
#include<conio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkGreater(int);

BOOL ChkGreater(int iValue)
{
    if(iValue>100)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("\n Please enter number \n");
    scanf("%d",&iValue);

    bRet = ChkGreater(iValue);

    if(bRet==1)
        {
        printf("\n Greater \n");
    }
    else
    {
        printf("\n Smaller \n");
    }
    return 0;
}
