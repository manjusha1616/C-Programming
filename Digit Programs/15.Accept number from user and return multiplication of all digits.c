/*Write a program which accept number from user and return multiplication of all digits.
Input : 2395
Output : 270
Input : 1018
Output : 8
Input : 9440
Output : 144
Input : 922432
Output : 864*/

#include<stdio.h>
#include<conio.h>

int MultDigits(int);

int MultDigits(int iNo)
{
    int iDigit = 0,Mult=1;

    while(iNo!=0)
    {
        iDigit = iNo%10;
        if(iDigit!=0)
        {
            Mult=iDigit*Mult;
        }
        iNo= iNo/10;
    }
    return Mult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("\nEnter number => ");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);

    printf("\nMultiplication of All Digits In Given Number => %d \n",iRet);

    getch();
    return 0;
}
