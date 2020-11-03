 /*Write Program to find maximum number from 10 inputted numbers
(Without array, only use 3 variables, handle if all inputs are -ve)*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int no=10,i=0,max=0;

    for(i=1;i<=10;i++)
    {
        printf("\n Enter Number %d=>",i);
        scanf("%d",&no);

        if(i==1)
        {
            max=no;
            continue;
        }

        if(no>max)
        {
            max=no;
        }
    }

    printf("\n\n===================================================");

    printf("\n\n The Maximum number from given 10 numbers is %d",max);

    printf("\n\n===================================================");

    getch();
    return 0;

}
