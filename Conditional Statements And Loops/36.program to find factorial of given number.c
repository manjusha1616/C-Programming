/*Write a program to find factorial of given number.
Input : 5
Output : 120 (5 * 4 * 3 * 2 * 1)
Input : -5
Output : 120 (5 * 4 * 3 * 2 * 1)
Input : 4
Output : 24 (4 * 3 * 2 * 1)*/

#include<stdio.h>
#include<conio.h>

int Factorial(int);

int Factorial(int iNo)
{
    int Ret=1;

    for(Ret=1;iNo>0;iNo--)
    {
        Ret=iNo*Ret;
    }
    return Ret;
}
int main()
{
    int iValue = 0,iRet = 0;

    printf("\nEnter number => ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("\nFactorial of %d is %d \n",iValue,iRet);

    getch();
    return 0;
}
