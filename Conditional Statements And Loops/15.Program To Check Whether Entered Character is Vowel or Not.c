/*Accept A character from user and check whether that character is vowel(a,e,i,o,u) or not.
Input : E Output : TRUE
Input : d Output : FALSE*/

#include<stdio.h>
#include<conio.h>
#include<stdbool.h>

# define TRUE 1
# define FALSE 0

bool ChkVowel(char);

bool ChkVowel( char cSrc)
{
    if(cSrc=='A'  || cSrc=='E' || cSrc=='I'|| cSrc=='O' || cSrc=='U' || cSrc=='a' || cSrc=='e' || cSrc=='i'|| cSrc=='o' || cSrc=='u')
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
    char cValue = '\0';
    bool bRet = FALSE;

    printf(" Enter character\n ");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    printf("\n==================$$$$$$$$$$$$==================\n\n");
    if (bRet == 1)
    {
        printf(" Entered Character Is Vowel ");
    }
    else
    {
        printf(" Entered Character Is Not Vowel ");
    }
    printf("\n\n==================$$$$$$$$$$$$==================\n");

    return 0;

}
