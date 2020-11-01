/*Write a program which accept range from user and return addition of all numbers in between that range.
(Range should contains positive numbers only)
Input : 23 30
Output : 212
Input : 10 18
Output : 126
Input : -10 2
Output : Invalid range
Input : 90 18
Output : Invalid range*/

#include<stdio.h>
#include<conio.h>

int RangeSum(int,int);

int RangeSum(int iStart , int iEnd)
{
    int No=0,Ans=0;

    No=iStart;

    if(No>iEnd || No<0)
    {
        printf("\nInvalid Range\n");
        return;
    }
    while(No>=iStart && No<=iEnd)
    {
        Ans=No+Ans;
        No++;
    }
    printf("\nAddition is =>  %d ",Ans);

}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet =0;

    printf("\nEnter Starting point => ");
    scanf("%d",&iValue1);

    printf("\nEnter Ending point => ");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1, iValue2);

    getch();
    return 0;
}
