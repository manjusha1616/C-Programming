//Write Program to find minimum number from 10 inputted numbers

#include<stdio.h>
#include<conio.h>

int main()
{
    int no=10,i=0,min=0;

    for(i=1;i<=10;i++)
    {
        printf("\n Enter Number %d=>",i);
        scanf("%d",&no);

        if(i==1)
        {
            min=no;
            continue;
        }

        if(no<min)
        {
            min=no;
        }
    }

    printf("\n\n===================================================");

    printf("\n\n The Minimum number from given 10 numbers is %d",min);

    printf("\n\n===================================================");

    getch();
    return 0;

}
