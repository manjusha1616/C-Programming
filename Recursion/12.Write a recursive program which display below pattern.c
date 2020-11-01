/*Write a recursive program which display below pattern.
Output : a b c d e f*/

#include<stdio.h>
#include<conio.h>

void Display();

void Display()
{
    static char ch='a';

    if(ch>'f')
    {
        return;
    }

    printf(" %c ",ch++);

    Display();
}
int main()
{
    printf("\n");
    Display();
    printf("\n");

    getch();
    return 0;
}

