/*Accept number from user and display below pattern.
Input : 5
Output : A B C D E*/

#include<stdio.h>
#include<conio.h>

void Pattern(int);

void Pattern(int iNo)
{
    char ch='A';

    while(iNo>0)
    {
        printf(" %c ",ch);
        ch++;
        iNo--;
    }
}

int main()
{
    int iValue = 0;

    printf("\nEnter number of elements => ");
    scanf("%d",&iValue);

    Pattern(iValue);

    getch();
    return 0;
}
