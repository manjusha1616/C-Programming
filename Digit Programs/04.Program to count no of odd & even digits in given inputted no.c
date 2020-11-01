//Program to count number of odd digits & even digits in given inputted number.

#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,Temp=0,Dig=0,OCnt=0,ECnt=0,ZCnt=0;

    printf("\nEnter a Number=>\n\n");
    scanf("%d",&No);

    Temp=No;

    while(Temp!=0)
    {
        Dig = Temp%10;
        if(Dig==0)
        {
            ZCnt++;
        }
        else if(Dig%2==0)
        {
            ECnt++;
        }
        else
        {
            OCnt++;
        }
        Temp=Temp/10;
    }
    printf("\n\n================================================\n\n");

    printf("EVEN Digits Count in of Given Number %d = %d",No,ECnt);
    printf("\n\nODD Digits Count in of Given Number %d = %d",No,OCnt);
    printf("\n\nZERO Digits Count in of Given Number %d = %d",No,ZCnt);

    printf("\n\n=================================================\n\n");

    getch();
    return 0;
}
