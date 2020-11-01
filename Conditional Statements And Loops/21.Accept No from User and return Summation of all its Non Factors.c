/*Write a program which accept number from user and return summation of all its non factors.
Input : 12
Output : 50
Input : 10
Output : 37*/

#include<stdio.h>
#include<conio.h>

int SumNonFact(int);

int SumNonFact(int iNo)
{
    int i=0,Sum_Ret=0;

    for(i=1;i <= iNo;i++)
    {
        if(iNo%i != 0)
        {
            Sum_Ret=Sum_Ret+i;
        }
    }
    return Sum_Ret;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf(" Enter number \n");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);

    printf("\n=======================$$$$$$$$$$$$=======================\n\n");
    printf(" Summation of All Non Factors Of %d => %d",iValue,iRet);
    printf("\n\n=======================$$$$$$$$$$$$=======================\n");

    return 0;
}
