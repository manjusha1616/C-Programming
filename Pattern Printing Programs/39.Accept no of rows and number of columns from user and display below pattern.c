/*Accept number of rows and number of columns from user and display below pattern.
Input : iRow = 5 iCol = 5
Output :
a b c d e
1 2 3 4 5
a b c d e
1 2 3 4 5
a b c d e*/

#include<stdio.h>
#include<conio.h>

void Pattern(int,int);

void Pattern(int iRow, int iCol)
{
     int i=0,j=0,Num=1;
     char ch='a';

    for(i=1;i<=iRow/2;i++,Num++)
    {
        for(ch='a',j=1;j<=iCol;ch++,j++)
        {
            printf(" %c ",ch);
        }
        printf("\n");
        for(Num=1;Num<=iCol;Num++)
        {
            printf(" %d ",Num);
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
