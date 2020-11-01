//pattern printing character Pattern

#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0,j=0,n=0;
    char ch='A';

    printf("\nEnter Value to Print character Triangular Pattern\n");
    scanf("%d",&n);

    printf("===================================== \n");
    for(i=1;i<=n;i++)
    {
       for(ch='A',j=1;j<=n;j++,ch++)
        {
            if(i>=j&&(i+j<=n+1))
            {
                printf("%c ",ch);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("===================================== \n");

    getch();
    return 0;
}
