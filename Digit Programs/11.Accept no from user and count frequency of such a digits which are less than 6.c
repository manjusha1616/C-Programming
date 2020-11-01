/*Write a program which accept number from user and count frequency of such a digits which are less than 6.
Input : 2395
Output : 3
Input : 1018
Output : 3
Input : 9440
Output : 3
Input : 96672
Output : 1*/

#include<stdio.h>
#include<conio.h>

int Count(int);

int Count(int iNo)
{
    int iDigit = 0,Cnt=0;

    while(iNo!=0)
    {
        iDigit = iNo%10;
        if(iDigit<6)
        {
            Cnt++;
        }
        iNo= iNo/10;
    }
    return Cnt;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("\nEnter number => ");
    scanf("%d",&iValue);

    iRet = Count(iValue);

    printf("\nLess Than 6 Digits Count Of In Given Number => %d ",iRet);

    getch();
    return 0;
}
