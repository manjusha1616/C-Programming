/*Write a program which accept N and print first 5 multiples of N.
Input : 4
Output : 4 8 12 16 20*/

#include<stdio.h>
#include<conio.h>

void MultipleDisplay(int);

void MultipleDisplay(int iNo)
{
    int i=1;

    while(i<6)
    {
        printf(" %d ",iNo*i);
        i++;
    }
}

int main()
{
    int iValue = 0;

    printf("\nEnter number => ");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    getch();
    return 0;
}
