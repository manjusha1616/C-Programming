/*Accept number from user and display below pattern.
Input : 8
Output : 2 4 6 8 10 12 14 16*/

#include<stdio.h>
#include<conio.h>

void Pattern(int);

void Pattern(int iNo)
{
    int i=0;

    i=1;

    while(iNo>0)
    {
        printf(" %d ",i*2);
        i++;
        iNo--;
    }
}

int main()
{
    int iValue = 0;

    printf("\nEnter number of elements => \n");
    scanf("%d",&iValue);

    Pattern(iValue);

    getch();
    return 0;
}
