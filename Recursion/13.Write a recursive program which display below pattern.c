/*Write a recursive program which display below pattern.
Input : 5
Output : * * * * *   */

#include<stdio.h>
#include<conio.h>

void Display(int);

void Display(int No)
{
    if(No<1)
    {
        return;
    }

    printf(" * ");

    Display(--No);
}
int main()
{
    int Num=0;

    printf("\nEnter Count To Display Star\n");
    scanf("%d",&Num);

    Display(Num);

    getch();
    return 0;
}
