//Write a program to print table of inputted no

#include<stdio.h>
#include<conio.h>

int main()
{
    int i=1,no=0;

    printf("\nEnter the number to print its table\n");
    scanf("%d",&no);

    printf("\n==========\n\n");

    while(i<=10)
    {
        printf("\n %d\n",no*i);
        i++;
    }

    printf("\n\n===========");

    getch();
    return 0;
}
