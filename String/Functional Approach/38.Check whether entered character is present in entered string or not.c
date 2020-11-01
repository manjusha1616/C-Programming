/*Write a program which accept string from user and accept one character.
Check whether that character is present in string or not.
Input : “Marvellous Multi OS”
e
Output : TRUE
Input : “Marvellous Multi OS”
W
Output : FALSE*/

#include<stdio.h>
#include<conio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char*,char);

BOOL ChkChar(char *str, char ch)
{
    int i=0;

    while(str[i]!='\0')
    {
        if(str[i]==ch)
        {
            return TRUE;
        }
        i++;
    }
    return FALSE;
}
int main()
{
    char arr[20];
    char cValue;
    BOOL bRet = FALSE;

    printf("\nEnter string => ");
    gets(arr);

    printf("\nEnter the character => ");
    scanf("%c",&cValue);

    getch();

    bRet = ChkChar(arr, cValue);

    if(bRet == TRUE)
    {
        printf("\nCharacter found \n");
    }
    else
    {
        printf("\nCharacter not found \n");
    }

    getch();
    return 0;
}
