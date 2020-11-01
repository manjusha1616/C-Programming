//star pattern printing Left Lower Triangular Pattern

#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0,j=0,n=0;

    printf("\nEnter Value to Print Left Lower Triangular Pattern\n");
    scanf("%d",&n);

    printf("===================================== \n\n");
    for(i=1;i<=n;i++)
    {
       for(j=1;j<=n;j++)
        {
            if(i>=j)
            {
                printf(" * ");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n===================================== \n");

    getch();
    return 0;
}
