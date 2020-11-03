//write a program to print sum of 10 inputted numbers

#include<stdio.h>
#include<conio.h>

int main()
{
    int no=0,sum=0,cnt=0;

    while(cnt<10)
    {
        printf("\nEnter a Number=>\n");
        scanf("%d",&no);

        sum=sum+no;
        no++;
        cnt++;
    }
    printf("\n Sum of given 10 numbers are=%d",sum);

    getch();
    return 0;
}
