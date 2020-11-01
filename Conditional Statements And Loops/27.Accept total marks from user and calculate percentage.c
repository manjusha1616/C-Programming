/*Write a program which accept total marks & obtained marks from user and calculate percentage.
Input : 1000 745
Output : 74.5%*/

#include<stdio.h>
#include<conio.h>

float Percentage(int,int);

float Percentage(int iValue1,int iValue2)
{
    if(iValue1==0 && iValue2==0)
    {
        return 0;
    }
    return (iValue1+iValue2)/2;
}
int main()
{
    int iValue1 = 0,iValue2 = 0;
    float fRet = 0.0;

    printf("\n Please enter total marks \n");
    scanf("%d",&iValue1);

    printf("\n Please enter obtained marks \n");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);

    printf("\n Percentage is = %f ",fRet);

    return 0;
}
