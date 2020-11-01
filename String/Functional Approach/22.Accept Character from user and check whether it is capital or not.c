/*Accept Character from user and check whether it is capital or not(A-Z).
Input : F
Output : TRUE
Input : d
Output : FALSE*/

#include<stdio.h>
#include<conio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkCapital(char);

BOOL ChkCapital(char ch)
{
    if(ch>=65&&ch<=90)
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

    bRet = ChkCapital(cValue);

    if(bRet == TRUE)
    {
        printf("\nIt is Capital Character \n");
    }
    else
    {
        printf("\nIt is not a Capital Character \n");
    }

    getch();
    return 0;
}
