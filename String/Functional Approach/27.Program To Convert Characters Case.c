/*Accept character from user. If character is small display its
corresponding capital character, and if it small then display its
corresponding capital. In other cases display as it is.
Input : Q
Output : q
Input : m
Output : M
Input : 4
Output : 4
Input : %
Output : % */

#include<stdio.h>
#include<conio.h>

void Display(char);

void Display(char ch)
{
    if(ch>='A'&&ch<='Z')
    {
        printf("\n %c \n",ch+32);
    }
    else if(ch>='a'&&ch<='z')
    {
        printf("\n %c \n",ch-32);
    }
    else
    {
        printf("\n %c \n",ch);
    }
}
int main()
{
    char cValue = '\0';

    printf("\n Enter the character =>");
    scanf("%c",&cValue);

    Display(cValue);

    getch();
    return 0;
}
