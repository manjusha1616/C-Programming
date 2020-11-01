/*Accept Character from user and check whether it is special symbol or not (!, @, #, $, %, ^, &, *).
Input : %
Output : TRUE
Input : d
Output : FALSE*/

#include<stdio.h>
#include<conio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSpecial(char);

BOOL ChkSpecial(char ch)
{
    if(ch>='0' && ch<='9')
    {
        return FALSE;
    }
    else if(ch>='A' && ch<='Z')
    {
        return FALSE;
    }
    else if(ch>='a' && ch<='z')
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("\nEnter the character => ");
    scanf("%c",&cValue);

    bRet = ChkSpecial(cValue);

    if(bRet == FALSE)
    {
        printf("\nIt is NOT special Character \n");
    }
    else
    {
        printf("\nIt is a special Character \n");
    }

    getch();
    return 0;
}
