/*Write a program which accept number from user and print numbers till that number.
Input : 8
Output : 1 2 3 4 5 6 7 8*/

#include<stdio.h>
#include<conio.h>

void Display(int);

void Display(int iNo)
{
    int i=1;

    while(iNo>0)
    {
        printf(" %d ",i);
        i++;
        iNo--;
    }
}
int main()
{
    int iValue = 0;

    printf("\n Enter number \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
