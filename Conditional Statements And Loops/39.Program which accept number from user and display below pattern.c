/*Write a program which accept number from user and display below pattern.
Input : 5
Output : * * * * * # # # # #
Input : 6
Output : * * * * * * # # # # # # #
Input : -5
Output : * * * * * # # # # #
Input : 2
Output : * * # #*/

#include<stdio.h>
#include<conio.h>

void Display(int);

void Display(int iNo)
{
    int Temp=0;

    if(iNo<0)
    {
        iNo =  -iNo;
    }
    Temp=iNo;
    while(Temp>0)
    {
        printf(" * ");
        Temp--;
    }
    while(iNo>0)
    {
        printf(" # ");
        iNo--;
    }
}

int main()
{
    int iValue = 0;

    printf("\nEnter number => \n");
    scanf("%d",&iValue);

    Display(iValue);

    getch();
    return 0;
}
