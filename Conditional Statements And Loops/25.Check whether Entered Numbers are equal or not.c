/*Write a program which accept two numbers and check whether numbers are equal or not.
Input : 10 10
Output : Equal
Input : 10 12
Output : Not Equal
Input : 10 -10
Output : Not Equal*/

#include<stdio.h>
#include<conio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkEqual(int,int);

BOOL ChkEqual(int iValue1, int iValue2)
{
    if(iValue1 == iValue2)
    {
        return TRUE;
    }
    return FALSE;
}

int main()
{
    int iValue1 = 0,iValue2 = 0;
    BOOL bRet = FALSE;

    printf("\n Please enter two numbers \n");
    scanf("%d%d",&iValue1, &iValue2);

    bRet = ChkEqual(iValue1, iValue2);

    if(bRet==1)
    {
        printf("\n Entered Numbers Are Equal \n");
    }
    else
    {
        printf("\n Entered Numbers Are Not Equal \n");
    }
    getch();
    return 0;
}
