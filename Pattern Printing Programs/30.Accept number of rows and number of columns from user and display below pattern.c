/*Accept number of rows and number of columns from user and display below pattern.
Input : iRow = 3 iCol = 5
Output :
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1*/

#include<stdio.h>
#include<conio.h>

void Pattern(int,int);

void Pattern(int iRow, int iCol)
{
    int i=0,j=0;

    for(i=iRow;i>=1;i--)
    {
        for(j=iCol;j>=1;j--)
        {
            printf(" %d ",j);
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
