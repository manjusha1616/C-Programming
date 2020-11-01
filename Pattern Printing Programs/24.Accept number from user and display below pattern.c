/*Accept number from user and display below pattern.
Input : 5
Output : 5 # 4 # 3 # 2 # 1 #*/

#include<stdio.h>
#include<conio.h>

void Pattern(int);

void Pattern(int iNo)
{
    while(iNo>0)
    {
        printf(" %d # ",iNo);
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
