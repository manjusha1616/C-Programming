/*Write Program to make sum of numbers till user enter zero/-ve number.
(Use break/continue & unconditional loop)*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int no=0,sum=0;

    printf("\nEnter Number For Addition\n");
    printf("\n\n(To stop addition Enter Zero or Negative Number\n\n");

    while(1)
    {
        printf("\nEnter Numbers For Addition=>\n");
        scanf("%d",&no);

        if(no<=0)
        {
            break;
        }
        sum=sum+no;
    }

    printf("\n\n===================================");
    printf("\n\n Addition of Given Numbers is=%d\n",sum);
    printf("\n==================================\n");

    getch();
    return 0;
}

