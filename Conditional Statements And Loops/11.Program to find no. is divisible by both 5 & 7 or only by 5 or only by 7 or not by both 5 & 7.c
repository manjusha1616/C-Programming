//write a program to find inputted no is divisible by both 5 and 7 or only by 5 or only by 7 or not by both 5 & 7
#include<stdio.h>
#include<conio.h>
int main()
{
    int no=0;
    lbl:
    printf("Enter a number=> \n");
    scanf("%d",&no);

    if(no==0)
    {
        printf("\nInvalid input\n");
        goto lbl;
    }

    if(no%5==0&&no%7==0)
    {
        printf("\n%d is Divisible by both 5 and 7",no);
    }

    else if(no%7==0)
    {
        printf("\n%d is Divisible by 7 \n",no);
    }

    else if(no%5==0)
    {
        printf("\n%d is Divisible by 5 \n",no);
    }

    else
    {
        printf("\n%d is not Divisible by Doth 5 and 7",no);
    }

    getch();
    return 0;
}
