//Lower Triangular Pattern of characters

#include<stdio.h>
#include<conio.h>

int main()
{
    int x=0,i=0,j=0;
    char ch='A';

    printf("\n Enter a value for Lower Triangular Pattern => \n");
    scanf("%d",&x);

    printf("===================================== \n");
    for(i=1;i<=x;i++)
    {
        for(j=1;j<=x;j++)
        {
            if(i>=j)
            {
                printf(" %c",ch);
            }
            else
            {
                printf(" ");
            }
        }
        ch++;
        printf("\n\n");
    }
    printf("===================================== \n");
    getch();
    return 0;
}
