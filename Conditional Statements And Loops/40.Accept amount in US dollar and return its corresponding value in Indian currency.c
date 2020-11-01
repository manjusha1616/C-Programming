/*Accept amount in US dollar and return its corresponding value in Indian currency Consider 1$ as 70 rupees.
Input : 10
Output : 700
Input : 3
Output : 210
Input : 1200
Output : 84000*/

#include<stdio.h>
#include<conio.h>

int DollarToINR(int);

int DollarToINR(int iNo)
{
    return iNo*70;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("\nEnter number of USD => ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("\nValue in INR is %d \n",iRet);

    getch();
    return 0;
}
