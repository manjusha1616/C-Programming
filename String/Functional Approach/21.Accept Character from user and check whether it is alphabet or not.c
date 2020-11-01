/*Accept Character from user and check whether it is alphabet or not (A-Z a-z).
Input : F
Output : TRUE
Input : &
Output : FALSE*/

#include<stdio.h>
#include<conio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char);

BOOL ChkAlpha(char ch)
{
    if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
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

    bRet = ChkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("\nIt is Character \n");
    }
    else
    {
        printf("\nIt is not a Character \n");
    }

    getch();
    return 0;
}
