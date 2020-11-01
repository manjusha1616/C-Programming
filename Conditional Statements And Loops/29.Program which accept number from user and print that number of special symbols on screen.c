/*Write a program which accept number from user and print that number of $ & * on screen.
Input : 5
Output : $ * $ * $ * $ * $ *
Input : 3
Output : $ * $ * $ *
Input : -3
Output : $ * $ * $ */

#include<stdio.h>
#include<conio.h>

void Pattern(int);

void Pattern(int iNo)
{
    if(iNo<0)
    {
        iNo =  -iNo;
    }
    while(iNo>0)
    {
        printf(" $ * ");
        iNo--;
    }
}
int main()
{
    int iValue = 0;

    printf("\n Enter number \n");
    scanf("%d",&iValue);

    Pattern(iValue);

    getch();
    return 0;
}
