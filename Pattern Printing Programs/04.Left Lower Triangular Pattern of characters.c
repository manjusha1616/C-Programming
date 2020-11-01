// Left Lower Triangular Pattern of characters

#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0,j=0,n=0,temp=0;
    char ch='A';

    printf("\nEnter Value to Print Left Lower Triangular Pattern\n");
    scanf("%d",&n);

    printf("===================================== \n");
    for(i=1;i<=n;i++)
    {
       for(j=1;j<=n;j++)
        {
            if(i>=j)
            {
                printf(" %c",ch+temp);
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
