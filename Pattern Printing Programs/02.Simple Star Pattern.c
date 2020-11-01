//Simple Star Pattern

#include<stdio.h>
#include<conio.h>

int main()
{
    int r=4,c=4,i=0,j=0;

    printf("\nEnter Row and Column Count to Print Pattern\n");
    scanf("%d%d",&r,&c);

    printf("\n===================================\n\n");
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    printf("\n=================================== \n");

    getch();
    return 0;
}
