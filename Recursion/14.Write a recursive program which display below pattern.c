/*Write a recursive program which display below pattern.
Input : 5
Output : 1 2 3 4 5*/

#include<stdio.h>
#include<conio.h>

void Display(int);

void Display(No)
{
    static int Temp=1;

    if(No<Temp)
    {
        return;
    }

    printf(" %d ",Temp++);

    Display(No--);
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
