/*Write a program which accept number from user and return the count of digits in between 3 and 7.
Input : 2395
Output : 1
Input : 1018
Output : 0
Input : 4521
Output : 2
Input : 9922
Output : 0*/

#include<stdio.h>
#include<conio.h>

int CountRange(int);

int CountRange(int iNo)
{
    int iDigit = 0,Cnt=0;

    while(iNo!=0)
    {
        iDigit = iNo%10;
        if(iDigit>=3 && iDigit<=7)
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

    iRet = CountRange(iValue);

    printf("\nBetween 5 To 7 Digits Count In Given Number => %d \n",iRet);

    getch();
    return 0;
}
