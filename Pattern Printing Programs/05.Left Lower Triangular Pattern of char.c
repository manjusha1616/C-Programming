// Left Lower Triangular Pattern of char

#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0,j=0,n=0;
    char ch='A';

    printf("\nEnter Value to Print Left Lower Triangular Pattern\n");
    scanf("%d",&n);

    printf("===================================== \n");
    for(i=1;i<=n;i++)
    {
       ch='A';
       for(j=1;j<=n;j++)
        {
            if(i>=j)
            {
                printf("%c ",ch);
            }
            else
            {
                printf(" ");
            }
            ch++;
        }
        printf("\n\n");
    }
    printf("===================================== \n");

    getch();
    return 0;
}
