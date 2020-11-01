/*Accept number of rows and number of columns from user and display below pattern.
Input : iRow = 4 iCol = 4
Output :
2 4 6 8 10
1 3 5 7 9
2 4 6 8 10
1 3 5 7 9*/

#include<stdio.h>
#include<conio.h>

void Pattern(int,int);

void Pattern(int iRow, int iCol)
{
    int i=0,j=0,Num=1;

    for(i=1;i<=iRow/2;i++,Num++)
    {
        for(j=1;j<=iCol;j++)
        {
            printf(" %d ",j*2);
        }
        printf("\n\n");
        for(Num=1;Num<=iCol*2;Num++)
        {
            printf(" %d ",Num);
            Num++;
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
