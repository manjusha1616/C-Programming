/*Accept one character from user and convert case of that character.
Input : a Output : A
Input : D Output : d*/

#include<stdio.h>
#include<conio.h>

void DisplayConvert(char);

void DisplayConvert( char CValue)
{
    printf("\n=======================$$$$$$$$$$$$=======================\n\n");
    if(CValue>='A' && CValue<='Z')
    {
        printf(" Uppercase To Lowercase Converted Character Is %c ",CValue+32);
    }
    else if(CValue>='a' && CValue<='z')
    {
        printf(" Lowercase To Uppercase Converted Character Is %c ",CValue-32);
    }
    printf("\n\n=======================$$$$$$$$$$$$=======================\n");
}
int main()
{
    char cValue ='\0';

    printf(" Enter character\n ");
    scanf("%c",&cValue);

    DisplayConvert(cValue );

    return 0;
}
