//Write a program to print table of inputted no in reverse order

#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0,no=0;

    printf("\n Enter the no to print its table in reverse order=>\n");
    scanf("%d",&no);

    printf("\n===============\n\n");

    for(i=10;i>=1;i--)
    {
        printf("\n %3d \n",no*i);
    }

    printf("\n\n================");

    getch();
    return 0;
}
