//Accept one number and check whether is is divisible by 5 or not.

#include<stdio.h>
#include<conio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL Check(int);

BOOL Check( int iNo)
{
    if(( iNo % 5) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE ;
    }
}

int main()
{
    int iValue = 0;

    BOOL bRet = FALSE;

    printf("\n Enter number \n");
    scanf("%d" ,&iValue);

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("\n Divisible by 5 \n");
    }
    else
    {
        printf("\n Not Divisible by 5 \n");
    }
    return 0;
}
