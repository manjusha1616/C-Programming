/*Accept division of student from user & depends on the division display exam timing. There are 4 divisions in school as A,B,C,D.
Exam of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM.(Application should be case insensitive)
Input : C
Output : Your exam at 9.20 AM
Input : d
Output : Your exam at 10.30 AM*/

#include<stdio.h>
#include<conio.h>

void DisplaySchedule(char);

void DisplaySchedule(char chDiv)
{
    switch(chDiv)
    {
        case 'A':
        case 'a':
            printf("\n Your exam at 7 AM \n");
            break;

        case 'B':
        case 'b':
            printf("\n Your exam at 08.30 AM \n");
            break;

        case 'C':
        case 'c':
            printf("\n Your exam at 9.20 AM \n");
            break;

        case 'D':
        case 'd':
            printf("\n Your exam at 10.30 AM \n");
            break;

        default:
            printf("\n Your Entered Division Is Invalid \n");
            break;
    }
}

int main()
{
    char cValue = '\0';

    printf("\nEnter the character => ");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    getch();
    return 0;
}
