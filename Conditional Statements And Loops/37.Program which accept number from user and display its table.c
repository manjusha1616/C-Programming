/*Write a program which accept number from user and display its table.
Input : 2
Output : 2 4 6 8 10 12 14 16 18 20
Input : 5
Output : 5 10 15 20 25 30 35 40 45 50
Input : -5
Output : 5 10 15 20 25 30 35 40 45 50*/

#include<stdio.h>
#include<conio.h>

void Table(int);

void Table(int iNo)
{
    int i=1;

    while(i<=10)
    {
        printf("\n\t %d \n",iNo*i);
        i++;
    }
}
int main()
{
    int iValue = 0;

    printf("\nEnter number => ");
    scanf("%d",&iValue);

    Table(iValue);

    getch();
    return 0;
}
