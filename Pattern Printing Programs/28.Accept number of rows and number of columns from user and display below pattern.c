/*Accept number of rows and number of columns from user and display below pattern.
Input : iRow = 4 iCol = 3
Output : * * *
* * *
* * *
* * * */

#include<stdio.h>
#include<conio.h>

void Pattern(int,int);

void Pattern(int iRow, int iCol)
{
    int i=0,j=0;

    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("\nEnter number of rows and columns => \n");
    scanf("%d%d",&iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    getch();
    return 0;
}
