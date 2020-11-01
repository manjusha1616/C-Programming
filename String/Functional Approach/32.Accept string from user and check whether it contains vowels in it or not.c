/*Write a program which accept string from user and check whether it contains vowels in it or not.
Input : “marvellous”
Output : TRUE
Input : “Demo”
Output : TRUE
Input : “xyz”
Output : FALSE*/

#include<stdio.h>
#include<conio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char*);

BOOL ChkVowel(char *str)
{
    while(*str!='\0')
    {
        if(*str=='A'||*str=='E'||*str=='I'||*str=='O'||*str=='U'||*str=='a'||*str=='e'||*str=='i'||*str=='o'||*str=='u')
        {
            return TRUE;
        }
        *str++;
    }
    return FALSE;
}
int main()
{
    char arr[20];
    BOOL bRet = FALSE;

    printf("\nEnter string => ");
    scanf("%[^'\n']s",arr);

    bRet = ChkVowel(arr);

    if(bRet == TRUE)
    {
        printf("\nString Contains Vowel\n");
    }
    else
    {
        printf("\nThere is no Vowel\n");
    }
    getch();
    return 0;
}
