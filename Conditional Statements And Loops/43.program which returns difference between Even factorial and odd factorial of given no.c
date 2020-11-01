/*Write a program which returns difference between Even factorial and odd factorial of given number.
Input : 5
Output : -7 (8 - 15)
Input : -5
Output : -7 (8 - 15)
Input : 10
Output : 2895 (3840 - 945)*/

#include<stdio.h>
#include<conio.h>

int FactorialDiff(int);

int FactorialDiff(int iNo)
{
    int Even=1,Odd=1;

    if(iNo<0)
    {
        iNo= -iNo;
    }

    for(Even=1,Odd=1;iNo>0;iNo--)
    {
        if(iNo%2==0)
        {
            Even=iNo*Even;
        }
        else
        {
            Odd=iNo*Odd;
        }
    }

    return Even-Odd;
}

int main()
{
   int iValue = 0,iRet = 0;

    printf("\nEnter number => ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("\nEven Factorial of %d is %d \n",iValue,iRet);

    getch();
    return 0;
}
