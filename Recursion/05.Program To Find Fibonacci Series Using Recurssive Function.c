//Program To Find Fibonacci Series Using Recurssive Function

#include<stdio.h>
#include<conio.h>

int Fibonacci_Series(int);

int main()
{
    int No=0,i=0;

    printf("\n Enter a Number for Fibonacci series=>\n\n");
    scanf(" %d",&No);

    for(i=0;i<No;i++)
    {
        printf(" %d ",Fibonacci_Series(i));
    }

    getch();
    return 0;
}

int Fibonacci_Series(int Num)
{
    if(Num==0||Num==1)
    {
        return Num;
    }

    return Fibonacci_Series(Num-1)+Fibonacci_Series(Num-2);
}
