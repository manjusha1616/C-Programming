//Left lower triangular Pattern printing of table of number 2

#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0,j=0,x=5,no=2,temp=1;

    printf("===================================== \n");
    for(i=1;i<=x;i++)
    {
       temp=1;
       for(j=1;j<=x;j++)
        {
            if(i>=j)
            {
                printf("%d ",no*temp);

            }
            else
            {
                printf(" ");
            }
            temp++;
        }
        printf("\n\n");
    }
    printf("===================================== \n");

    getch();
    return 0;
}
