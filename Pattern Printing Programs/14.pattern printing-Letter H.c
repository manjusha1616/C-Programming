//pattern printing-Letter H

#include<stdio.h>
#include<conio.h>

int main()
{
    int r=0,c=0,x=0;

    printf("\nEnter value of x=>\n");
    scanf("%d",&x);

    printf("\n================================ \n\n");
    for(r=0;r<=x;r++)
    {
        for(c=0;c<=x;c++)
        {
            if(c==0||c==x||r==x/2+1)
            {
                printf(" *");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n===============================\n");

    getch();
    return 0;
}
