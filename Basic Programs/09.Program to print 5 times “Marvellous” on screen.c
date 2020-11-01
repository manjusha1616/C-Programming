//Program to print 5 times “Marvellous” on screen.

#include<stdio.h>
#include<conio.h>

void Display();

void Display()
{
    int i = 0;

    for(i = 1;i<=5;i++)
    {
        printf("\n Marvellous \n");
    }
}

int main()
{
    Display();
    return 0;
}
