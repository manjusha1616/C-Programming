//Left Lower Triangular Pattern of Number 7

#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0,j=0,x=0;

    printf("\nEnter Value to Print Left Lower Triangular Pattern\n");
    scanf("%d",&x);

    printf("===================================== \n\n");
    for(i=1;i<=x;i++)
    {
       for(j=1;j<=x;j++)
        {
            if(i>=j)
            {
                printf(" 7");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n\n");
    }
    printf("\n===================================== \n");

    getch();
    return 0;
}
