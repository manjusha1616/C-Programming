/*Write a program which accept no from user and return difference between sum of even digits and sum of odd digits.
Input : 2395
Output : -15 (2 - 17)
Input : 1018
Output : 6 (8 - 2)
Input : 8440
Output : 16 (16 - 0)
Input : 5733
Output : -18 (0 - 18)*/

#include<stdio.h>
#include<conio.h>

int CountDiff(int);

int CountDiff(int iNo)
{
    int iDigit = 0,Odd=0,Even=0;

    while(iNo!=0)
    {
        iDigit = iNo%10;
        if(iDigit%2==0)
        {
            Even=iDigit+Even;
        }
        if(iDigit%2!=0)
        {
            Odd=iDigit+Odd;
        }
        iNo= iNo/10;
    }
    return Even-Odd;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("\nEnter number => ");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("\nDifference between sum of even & odd digits In Given Number => %d \n",iRet);

    getch();
    return 0;
}
