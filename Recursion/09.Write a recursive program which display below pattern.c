/*Write a recursive program which display below pattern.
Output : 1 2 3 4 5   */

#include<stdio.h>
#include<conio.h>

void Display();

void Display()
{
    static int No=1;

    if(No>5)
    {
        return;
    }

    printf(" %d ",No++);

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
