/*Write a recursive program which accept number from user and return summation of its digits.
Input : 879
Output : 24*/

#include<stdio.h>
#include<conio.h>

int summation(int);

int summation(int iNo)
{
    static int sum=0,Temp=0;

    sum=sum+(iNo%10);
    Temp=iNo/10;

    if(Temp>0)
    {
        summation(Temp);
    }
    return sum;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("\nEnter number=> ");
    scanf("%d",&iValue);

    iRet = summation(iValue);

    printf("\nsummation of digits of Given Number => %d \n",iRet);

    getch();
    return 0;
}
