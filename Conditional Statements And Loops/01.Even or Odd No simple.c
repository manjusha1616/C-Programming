//write a program to accept no from user and check whether it is even or odd
#include<stdio.h>
#include<conio.h>
int main()
{
    int no=0;

    Up:
    printf("Enter a Number to Oheck it is Even or Odd => ");
    scanf("%d",&no);

    if(no<=0)
    {
        printf("\n\n Invalid Input\n\n");
        goto Up;
    }

    if(no%2==0)
    {
        printf("\nThe %d is Even Number",no);
    }
    else
    {
        printf("\nThe %d is Odd Number",no);
    }
    getch();
    return 0;
}
