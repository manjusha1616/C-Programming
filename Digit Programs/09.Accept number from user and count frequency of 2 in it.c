/*Write a program which accept number from user and count frequency of 2 in it.
Input : 2395
Output : 1
Input : 1018
Output : 0
Input : 9000
Output : 0
Input : 922432
Output : 3*/

#include<stdio.h>
#include<conio.h>

int CountTwo(int);

int CountTwo(int iNo)
{
    int iDigit = 0,Cnt=0;

    while(iNo!=0)
    {
        iDigit = iNo%10;
        if(iDigit==2)
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

    iRet = CountTwo(iValue);

    printf("\nCount Of Digit 2 In Given Number => %d ",iRet);

    getch();
    return 0;
}
