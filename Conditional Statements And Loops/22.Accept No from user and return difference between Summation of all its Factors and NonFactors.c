/*Program which Accept No from user and return difference between Summation of all its Factors and NonFactors.
Input : 12
Output : -34 (16 - 50)
Input : 10
Output : -29 (8 - 37)*/

#include<stdio.h>
#include<conio.h>

int FactDiff(int);

int FactDiff(int iNo)
{
    int i=0,Non_Factors=0,Factors=0,Diff=0;

    for(i=1;i <= iNo;i++)
    {
        if(iNo%i != 0)
        {
            Non_Factors=Non_Factors+i;
        }
    }
    for(i=1; i <= iNo/2 ;i++)
    {
        if(iNo%i == 0)
        {
            Factors=Factors+i;
        }
    }
    Diff=Non_Factors-Factors;
    return Diff;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf(" Enter number \n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("\n============================$$$$$$$$$$$$============================\n\n");
    printf(" Difference Between Summation of Factors and NonFactors Of %d => %d",iValue,iRet);
    printf("\n\n============================$$$$$$$$$$$$============================\n");

    return 0;
}

