/*Write a program which accept area in square feet and convert it into square meter(1 square feet = 0.0929 Square meter)
Input : 5
Output : 0.464515
Input : 7
Output : 0.650321*/

#include<stdio.h>
#include<conio.h>

double SquareMeter(int);

double SquareMeter(int iValue)
{
    return iValue*0.0929;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("\nEnter area in square feet => ");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("\n Area Converted Square Feet Into Square Meter Is => %f \n",dRet);

    getch();
    return 0;
}
