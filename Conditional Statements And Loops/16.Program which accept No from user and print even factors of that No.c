/*Write a program which accept number from user and print even factors of that number.
Input : 36
Output: 2 6 12 18*/

#include<stdio.h>
#include<conio.h>

void DisplayEvenFactor(int);

void DisplayEvenFactor(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    printf("\n==================$$$$$$$$$$==================\n\n");
    for(i = 1; i<= iNo/2 ;i++)
    {
        if(iNo%i == 0 && i%2==0)
        {
            printf(" %d ",i);
        }
    }
    printf("\n\n==================$$$$$$$$$$==================\n\n");
}

int main()
{
    int iValue = 0;

    printf(" Enter number\n ");
    scanf("%d",&iValue);

    DisplayEvenFactor(iValue );

    return 0;
}
