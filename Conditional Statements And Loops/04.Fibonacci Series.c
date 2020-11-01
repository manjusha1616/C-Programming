//write a program to print FIBONACCI SERIES
#include<stdio.h>
#include<conio.h>
int main()
{
    int cnt=0,no1=0,no2=1,no3=0;

    lbl:

    printf("\nEnter a count for Fibonacci series=>\n");
    scanf("%d",&cnt);

    printf("\nFibonacci series =%d %d",no1,no2);

    while(cnt>=1)
    {
        no3=no1+no2;
        printf(" %d",no3);
        no1=no2;
        no2=no3;

        cnt--;
    }
    getch();
    return 0;
}
