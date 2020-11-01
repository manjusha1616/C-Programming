/*Write a program which accept range from user and display all even numbers in between that range.
Input : 23 35
Output : 24 26 28 30 32 34
Input : 10 18
Output : 10 12 14 16 18
Input : 10 10
Output : 10
Input : -10 2
Output : -10 -8 -6 -4 -2 0 2
Input : 90 18
Output : Invalid range*/

#include<stdio.h>
#include<conio.h>

void RangeDisplayEven(int,int);

void RangeDisplayEven(int iStart , int iEnd)
{
    int No=0;

    No=iStart;

    if(No>iEnd)
    {
        printf("\nInvalid Range\n");
        return;
    }
    while(No>=iStart && No<=iEnd)
    {
        if(No%2==0)
        {
             printf(" %d ",No);
        }
        No++;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("\nEnter Starting point => ");
    scanf("%d",&iValue1);

    printf("\nEnter Ending point => ");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1, iValue2);

    getch();
    return 0;
}
