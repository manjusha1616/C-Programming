/*Write a program which accept three numbers and print its multiplication.
Input : 5 4 7
Output : 140
Input : 5 0 7
Output : 35
Input : 5 0 0
Output : 5
Input : 0 0 0
Output : 0*/

#include<stdio.h>
#include<conio.h>

int Multiply(int,int, int);

int Multiply(int iValue1,int iValue2, int iValue3)
{
    if(iValue1==0 && iValue2==0 && iValue3==0)
    {
        return 0;
    }
    if(iValue1==0)
    {
        iValue1 =1;
    }
    if(iValue2==0)
    {
        iValue2 =1;
    }
    if(iValue3==0)
    {
        iValue3 =1;
    }
    return iValue1*iValue2*iValue3;
}

int main()
{
    int iValue1 = 0,iValue2 = 0, iValue3 = 0, iRet = 0;

    printf("\n Please enter three numbers ");
    scanf("%d%d%d",&iValue1,&iValue2,&iValue3);

    iRet = Multiply(iValue1,iValue2,iValue3);

    printf("\n Multiplication Of Given Three Numbers Is = %d \n",iRet);

    return 0;
}
