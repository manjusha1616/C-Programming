/*Write a recursive program which display below pattern.
Output : * * * * *   */

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

    printf(" * ",No--);

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
