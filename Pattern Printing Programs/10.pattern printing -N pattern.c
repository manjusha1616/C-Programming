//pattern printing -N pattern

#include<stdio.h>
#include<conio.h>

int main()
{
    int r=0,c=0,i=0,j=0;

    printf("\nEnter Row and Column Count to Print N Pattern\n");
    scanf("%d%d",&r,&c);

    printf("\n======================\n\n");
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            if(j==1||j==c||i==j)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n======================= \n");

    getch();
    return 0;
}
