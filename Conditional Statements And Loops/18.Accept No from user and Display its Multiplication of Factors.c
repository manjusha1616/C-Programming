/*Write a program which accept number from user and display its multiplication of factors.
Input : 12
Output : 144 (1 * 2 * 3 * 4 * 6)
Input : 13
Output : 1 (1)
Input : 10
Output : 10 (1 * 2 * 5)*/

#include<stdio.h>
#include<conio.h>

int MultFact(int);

int MultFact(int iNo)
{
    int i=0,Ret=1;

    for(i=1; i <= iNo/2 ;i++)
    {
        if(iNo%i == 0)
        {
            Ret=Ret*i;
        }
    }
    return Ret;
}

int main()
{
    int iValue = 0;

    printf(" Enter number \n");
    scanf("%d",&iValue);

    printf("\n====================$$$$$$$$$$=====================\n\n");
    printf(" Multiplication Of Factors Of Given Number Is => %d",MultFact(iValue));
    printf("\n\n====================$$$$$$$$$$====================\n");

    return 0;
}
