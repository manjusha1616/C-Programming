//write a program to swap two numbers using functional approach(call by address)
#include<stdio.h>
#include<conio.h>

void swap(int*,int*);

int main()
{
    int x=0,y=0;

    printf("Enter two numbers to swapping\n\n");
    scanf("%d%d",&x,&y);

    printf("\n Before calling a function or before swapping \n x=%d and y=%d",x,y);

    swap(&x,&y);

    printf("\n\n After calling a function or before swapping \n x=%d and y=%d",x,y);

    getch();
    return 0;
}
void swap(int *x,int *y)
{
    int temp=0;
    temp=*x;
    *x=*y;
    *y=temp;
}
