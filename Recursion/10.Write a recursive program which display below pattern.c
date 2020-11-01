/*Write a recursive program which display below pattern.
Output : 5 4 3 2 1   */

#include<stdio.h>
#include<conio.h>

void Display();

void Display()
{
    static int No=5;

    if(No<1)
    {
        return;
    }

    printf(" %d ",No--);

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
