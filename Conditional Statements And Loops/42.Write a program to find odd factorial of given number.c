/*Write a program to find odd factorial of given number.
Input : 5
Output : 15 (5 * 3 * 1)
Input : -5
Output : 15 (5 * 3 * 1)
Input : 10
Output : 945 (9 * 7 * 5 * 3 * 1)*/

#include<stdio.h>
#include<conio.h>

int OddFactorial(int);

int OddFactorial(int iNo)
{
    int Ret=1;

    if(iNo<0)
    {
        iNo= -iNo;
    }

    for(Ret=1;iNo>0;iNo--)
    {
        if(iNo%2!=0)
        {
            Ret=iNo*Ret;
        }
    }
    return Ret;
}
int main()
{
    int iValue = 0,iRet = 0;

    printf("\nEnter number => ");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("\nOdd Factorial of %d is %d \n",iValue,iRet);

    getch();
    return 0;
}
