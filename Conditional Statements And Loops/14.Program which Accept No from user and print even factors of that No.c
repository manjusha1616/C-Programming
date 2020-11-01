/*Write a program which accept number from user and print even factors of that number.
Input : 24
Output: 1 2 4 6 8 12*/

#include<stdio.h>
#include<conio.h>

void DisplayFactor(int);

void DisplayFactor(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    printf("\n==================$$$$$$$$$$==================\n\n");
    for(i=1; i <= iNo/2 ;i++)
    {
        if(iNo%i == 0 && i%2==0)
        {
            printf(" %d ",i);
        }
    }
    printf("\n\n==================$$$$$$$$$$==================\n");
}
int main()
{
    int iValue = 0;

    printf(" Enter number\n ");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    getch();
    return 0;
}
