//Program to divide two numbers

#include<stdio.h>
#include<conio.h>

int Divide(int, int);

int Divide(int iNo1, int iNo2)
{
    int iAns = 0;

    iAns = iNo1 / iNo2;

    return iAns;
}
int main()
{
    int iValue1 = 15, iValue2 = 5;
    int iRet = 0;

    iRet = Divide(iValue1,iValue2);

    printf("\n Division is => %d \n",iRet);

    return 0;
}
