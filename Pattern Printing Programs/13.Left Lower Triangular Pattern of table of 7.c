//Left Lower Triangular Pattern of table of 7

#include<stdio.h>
#include<conio.h>

int main()
{
    int no=7,i=0,j=0,temp=1,x=5;

    printf("===================================== \n");
    for(i=1;i<=x;i++)
    {
        for(j=1;j<=x;j++)
        {
            if(i>=j)
            {
                printf(" %d",no*temp);
                temp++;
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
