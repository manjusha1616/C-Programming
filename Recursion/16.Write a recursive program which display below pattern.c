/*Write a recursive program which display below pattern.
Input : 6
Output : A B C D E F*/

#include<stdio.h>
#include<conio.h>

void Display(int);

void Display(int No)
{
    static char ch='A';

    if(No<1)
    {
        return;
    }

    printf(" %c ",ch++);

    Display(--No);
}
int main()
{
    int Num=0;

    printf("\nEnter Count To Display Characters\n");
    scanf("%d",&Num);

    Display(Num);

    getch();
    return 0;
}
