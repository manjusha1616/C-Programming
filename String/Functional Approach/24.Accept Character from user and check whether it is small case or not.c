/*Accept Character from user and check whether it is small case or not (a-z).
Input : g
Output : TRUE
Input : D
Output : FALSE*/

#include<stdio.h>
#include<conio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSmall(char);

BOOL ChkSmall(char ch)
{
    if(ch>=97&&ch<=122)
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

    bRet = ChkSmall(cValue);

   if(bRet == TRUE)
    {
        printf("\nIt is a Small case Character \n");
    }
    else
    {
        printf("\nIt is not a Small case Character \n");
    }
    getch();
    return 0;
}
