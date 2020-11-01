/*Write a program which accepts N from user and print all odd numbers up to N.
Input : 18
Output : 1 3 5 7 9 11 13 15 17*/

#include<stdio.h>
#include<conio.h>

void OddDisplay(int);

void OddDisplay(int iNo)
{
    int i=1;

    while(i<=iNo)
    {
        printf(" %d ",i++);
        i++;
    }
}

int main()
{
    int iValue = 0;
    lbl:
    printf("\n Enter number =>");
    scanf("%d",&iValue);

    if(iValue<0)
    {
        printf("\nPlease Enter A Positive Number \n\n");
        goto lbl;
    }

    OddDisplay(iValue);

    return 0;
}
