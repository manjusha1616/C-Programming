/*Write a program which accept number from user and display its table in reverse order.
Input : 2
Output : 20 18 16 14 12 10 8 6 4 2
Input : 5
Output : 50 45 40 35 30 25 20 15 10 5
Input : -5
Output : 50 45 40 35 30 25 20 15 10 5*/

#include<stdio.h>
#include<conio.h>

void TableRev(int);

void TableRev(int iNo)
{
    int i=10;

    while(i>=1)
    {
        printf("\n\t %d \n",iNo*i);
        i--;
    }
}
int main()
{
    int iValue = 0;

    printf("\nEnter number => ");
    scanf("%d",&iValue);

    TableRev(iValue);

    getch();
    return 0;
}
