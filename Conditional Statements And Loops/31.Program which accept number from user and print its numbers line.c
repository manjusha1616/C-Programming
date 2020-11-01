/*Write a program which accept number from user and print its numbers line.
Input : 4
Output : -4 -3 -2 -1 0 1 2 3 4*/

#include<stdio.h>
#include<conio.h>

void Display(int);

void Display(int iNo)
{
    int i=0;

    i=(-iNo);

    while(i<=iNo)
    {
        printf(" %d ",i);
        i++;
    }
}
int main()
{
    int iValue = 0;
    lbl:
    printf("\nEnter a positive number \n");
    scanf("%d",&iValue);

    if(iValue<0)
    {
        printf("\nPlease Enter A Positive Number \n");
        goto lbl;
    }

    Display(iValue);

    getch();
    return 0;
}
