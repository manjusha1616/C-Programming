//Left Lower Triangular Pattern of Numbers

#include<stdio.h>
#include<conio.h>

int main()
{
    int x=0,i=0,j=0,no=1;

    printf("\n Enter a value for Lower Triangular Pattern => \n");
    scanf("%d",&x);

    printf("===================================== \n");
    for(i=1;i<=x;i++)
    {
        for(j=1;j<=x;j++)
        {
            if(i>=j)
            {
                printf(" %d",no);
                no++;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n\n");
    }
    printf("===================================== \n");
    getch();
    return 0;
}
