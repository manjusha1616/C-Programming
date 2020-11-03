//Write a Program to display table of number 5 to 10.

#include<stdio.h>
#include<conio.h>

int main()
{
    int r=0,c=0,sp=5,ep=10;

    printf("\nTable of Numbers 5 to 10 \n\n");
    printf("\n*************************************************\n\n");

    if(sp<ep)
    {
        for(r=1;r<=10;r++)
        {
            for(c=sp;c<=ep;c++)
            {
                printf(" %d\t",r*c);
            }
            printf("\n");
        }
    }
    else
    {
        for(r=1;r<=10;r++)
        {
            for(c=sp;c>=ep;c--)
            {
                printf(" %d\t",r*c);
            }
            printf("\n");
        }
    }

    printf("\n\n*************************************************");

    getch();
    return 0;
}
