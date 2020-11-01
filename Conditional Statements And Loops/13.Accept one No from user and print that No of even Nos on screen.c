/*Write a program which accept one number from user and print that number of even numbers on screen.
Input : 7
Output: 2 4 6 8 10 12 14*/

#include<stdio.h>
#include<conio.h>

void PrintEven(int);

void PrintEven(int iNo)
{
    int i=1,Cnt=0;

    if(iNo <= 0)
    {
        return;
    }
    printf("\n==================$$$$$$$$$$==================\n\n");
    for(Cnt=1;Cnt<=iNo;Cnt++,i++)
    {
        printf(" %d ",2*i);
    }
    printf("\n\n==================$$$$$$$$$$==================\n");
}
int main()
{
    int iValue = 0;

    printf(" Enter number \n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}
