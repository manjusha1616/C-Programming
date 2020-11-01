/*Accept Character from user and check whether it is digit or not(0-9).
Input : 7
Output : TRUE
Input : d
Output : FALSE*/

#include<stdio.h>
#include<conio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(char);

BOOL ChkDigit(char ch)
{
    if(ch>=48&&ch<=57)
    {
        return 1;
    }
    return 0;
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("\nEnter the character => ");
    scanf("%c",&cValue);

    bRet = ChkDigit(cValue);

    if(bRet == TRUE)
    {
        printf("\nIt is a Digit \n");
    }
    else
    {
        printf("\nIt is not a Digit \n");
    }

    getch();
    return 0;
}
