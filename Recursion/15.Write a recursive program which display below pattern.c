/*Write a recursive program which display below pattern.
Input : 5
Output : 5 4 3 2 1*/

#include<stdio.h>
#include<conio.h>

void Display(int);

void Display(int No)
{
    if(No<1)
    {
        return;
    }

    printf(" %d ",No);

    Display(--No);
}
int main()
{
    int Num=0;

    printf("\nEnter Count To Display Numbers\n");
    scanf("%d",&Num);

    Display(Num);

    getch();
    return 0;
}
