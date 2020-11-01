/*Accept single digit number from user and print it into word.
Input : 9
Output : Nine
Input : -3
Output : Three
Input : 12
Output : Invalid Number*/

#include<stdio.h>
#include<conio.h>

void Display(int);

void Display(int iNo)
{
    switch(iNo)
    {
        case 1:
        case -1:
            printf("\nOne \n");
            break;

        case 2:
        case -2:
            printf("\nTwo \n");
            break;

        case 3:
        case -3:
            printf("\nThree \n");
            break;

        case 4:
        case -4:
            printf("\nFour \n");
            break;

        case 5:
        case -5:
            printf("\nFive \n");
            break;

        case 6:
        case -6:
            printf("\nSix \n");
            break;

        case 7:
        case -7:
            printf("\nSeven \n");
            break;

        case 8:
        case -8:
            printf("\nEight \n");
            break;

        case 9:
        case -9:
            printf("\nNine \n");
            break;

        default:
                printf("\nInvalid Number\n");
                break;
    }
}
int main()
{
    int iValue = 0;

    printf("\nEnter number, Please Enter A Single Digit => ");
    scanf("%d",&iValue);

    Display(iValue);

    getch();
    return 0;
}
