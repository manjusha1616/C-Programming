/*Write a recursive program which display below pattern.
Input : 6
Output : a b c d e f*/

#include<stdio.h>
#include<conio.h>

void Display(int);

void Display(int No)
{
    static char ch='a';

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

    printf("\nEnter Count To Display characters\n");
    scanf("%d",&Num);

    Display(Num);

    getch();
    return 0;
}
