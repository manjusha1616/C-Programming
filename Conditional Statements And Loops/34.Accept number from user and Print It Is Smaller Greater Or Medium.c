/*Write a program which accept number from user and if number is less than 50
then print small , if it is greater than 50 and less than 100 then print medium, if it is
greater than 100 then print large.
Input : 75
Output : Medium*/

#include<stdio.h>
#include<conio.h>

void Number(int);

void Number(int iNo)
{
    if(iNo<50)
    {
        printf("\n Number Is Smaller");
    }
    else if(iNo>50 && iNo<100)
    {
        printf("\n Number Is Medium");
    }
    else
    {
        printf("\n Number Is Large");
    }
}
int main()
{
    int iValue = 0;

    printf("\nEnter number => ");
    scanf("%d",&iValue);

    Number(iValue);

    getch();
    return 0;
}
