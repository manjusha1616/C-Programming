/*Write a program which accept number from user and return the count of odd digits.
Input : 2395
Output : 3
Input : 1018
Output : 2
Input : -1018
Output : 2
Input : 8462
Output : 0*/

#include<stdio.h>
#include<conio.h>

int CountOdd(int);

int CountOdd(int iNo)
{
    int iDigit = 0,Cnt=0;

    while(iNo!=0)
    {
        iDigit = iNo%10;
        if(iDigit%2!=0)
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


    iRet = CountOdd(iValue);

    printf("\nOdd Digits Count In Given Number => %d \n",iRet);

    getch();
    return 0;
}
