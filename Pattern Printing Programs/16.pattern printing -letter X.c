//pattern printing -letter X

#include<stdio.h>
#include<conio.h>

int main()
{
     int i=0,j=0,x=0;

    printf("\nEnter value of x=>\n");
    scanf("%d",&x);

    printf("================================\n");
    for(j=1;j<=x;j++)
    {
        for(i=1;i<=x;i++)
        {
            if(i==j||(i+j==x+1))
            {
                printf("*");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
     }
     printf("===============================\n");
     getch();
}
