//Program to print 5 to 1 numbers on screen.

#include<stdio.h>
#include<conio.h>

void Display();

void Display()
{
    int i = 0;

    i=5;

    printf("\n*************=====************* \n\n");
    while(i>=1)
    {
        printf(" %d ",i);
        i--;
    }
    printf("\n\n*************=====************* \n");
}

int main()
{
    Display();
    return 0;
}
