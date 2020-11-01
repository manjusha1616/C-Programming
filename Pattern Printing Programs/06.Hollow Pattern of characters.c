//Hollow Pattern of characters

#include<stdio.h>
#include<conio.h>

int main()
{
    int r=5,c=5,i=0,j=0;

    char sp='A',ep='E';

    printf("================================= \n");
     for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            if(i==1||j==1||i==r||j==c)
            {
                printf("%c",sp);
            }
            else
            {
                    printf(" ");
            }
            sp++;
        }
        printf("\n");
    }
    printf("================================= \n");
    getch();
    return 0;
}

