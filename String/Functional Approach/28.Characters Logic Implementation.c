/*Accept character from user. If it is capital then display all the characters from the input characters till Z.
If input character is small then print all the characters in reverse order till a.
In other cases return directly.
Input : Q
Output : Q R S T U V W X Y Z
Input : m
Output : m l k j i h g f e d c b a
Input : 8
Output :*/

#include<stdio.h>
#include<conio.h>

void Display(char);

void Display(char ch)
{
    while(ch>='A'&&ch<='Z')
    {
        printf(" %c ",ch);
        ch++;
    }
    while(ch>='a'&&ch<='z')
    {
        printf(" %c ",ch);
        ch--;
    }
    return;
}

int main()
{
    char cValue = '\0';

    printf("\n Enter the character =>\n");
    scanf("%c",&cValue);

    Display(cValue);

    getch();
    return 0;
}
