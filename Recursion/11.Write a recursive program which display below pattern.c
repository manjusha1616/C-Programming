/*Write a recursive program which display below pattern.
Output : A B C D E F*/

#include<stdio.h>
#include<conio.h>

void Display();

void Display()
{
    static char ch='A';

    if(ch>'F')
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

