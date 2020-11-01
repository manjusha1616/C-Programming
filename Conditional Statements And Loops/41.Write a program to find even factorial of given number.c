/*Write a program to find even factorial of given number.
Input : 5
Output : 8 (4 * 2)
Input : -5
Output : 8 (4 * 2)
Input : 10
Output : 3840 (10 * 8 * 6 * 4 * 2)*/

#include<stdio.h>
#include<conio.h>

int EvenFactorial(int);

int EvenFactorial(int iNo)
{
    int Ret=1;

    if(iNo<0)
    {
        iNo= -iNo;
    }

    for(Ret=1;iNo>0;iNo--)
    {
        if(iNo%2==0)
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

    iRet = EvenFactorial(iValue);

    printf("\nEven Factorial of %d is %d \n",iValue,iRet);

    getch();
    return 0;
}
