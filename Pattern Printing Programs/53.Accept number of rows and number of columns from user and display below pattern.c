/*Accept number of rows and number of columns from user and display below pattern.
Input : iRow = 6 iCol = 6
Output :
* * * * * *
* # # # * *
* # # * $ *
* # * $ $ *
* * $ $ $ *
* * * * * *  */

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
            if(i==1||j==1||i+j==iCol+1||i==iRow||j==iCol)
            {
                printf(" * ");
            }
            else if(i+j>iRow)
            {
                printf(" $ ");
            }
            else
            {
                printf(" # ");
            }
        }
        printf("\n\n");
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

