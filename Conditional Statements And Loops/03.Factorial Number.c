//write a program for factorial number for given number

#include<stdio.h>
#include<conio.h>

int main()
{
    int no=0,temp=0,fact=1;
    lbl:

    printf("\n Enter a Number To Print its Factorial=>\n");
    scanf("%d",&no);

    temp=no;

    while(temp>1)
    {
        fact=fact*temp;
        temp--;
    }

    printf("\n\n Factorial of %d is=%d",no,fact);

    getch();
    return 0;
}
