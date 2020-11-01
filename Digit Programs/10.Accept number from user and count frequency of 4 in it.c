/*Write a program which accept number from user and count frequency of 4 in it.
Input : 2395
Output : 0
Input : 1018
Output : 0
Input : 9440
Output : 2
Input : 922432
Output : 1*/

#include<stdio.h>
#include<conio.h>

int CountFour(int);

int CountFour(int iNo)
{
    int iDigit = 0,Cnt=0;

    while(iNo!=0)
    {
        iDigit = iNo%10;
        if(iDigit==4)
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

    iRet = CountFour(iValue);

    printf("\nCount Of Digit 4 In Given Number => %d ",iRet);

    getch();
    return 0;
}
