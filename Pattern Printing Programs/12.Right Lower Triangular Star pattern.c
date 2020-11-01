//Right Lower Triangular Star pattern

#include<stdio.h>
#include<conio.h>

int main()
{
    int n=0,i=0,j=0;

    printf("\nEnter Row and Column Count to Print Right Lower Triangular Pattern\n");
    scanf("%d",&n);

    printf("\n======================\n\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i+j>n)
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
