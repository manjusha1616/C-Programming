/*Write program to accept character from user which can be
A or B or C or D OR a or b or c or d. ( Use Switch Case )*/

#include<stdio.h>
#include<conio.h>

int main()
{
    char ch;

    printf("\n Enter a character=>\n");
    scanf("%c",&ch);

    switch(ch)
    {
        case 'A':
        case 'a':
                printf("\n WELCOME \n");
                break;

        case 'B':
        case 'b':
                printf("\n Good Bye \n");
                break;

        case 'C':
        case 'c':
                printf("\n Have a nice day \n");
                break;

        case 'D':
        case 'd':
                printf("\n Good day \n");
                break;

        default:
                printf("\n Invalid input\n");
                break;
    }
    getch();
    return 0;
}
