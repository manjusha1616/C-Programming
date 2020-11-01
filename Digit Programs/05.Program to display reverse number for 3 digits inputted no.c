//write a program to display reverse number for 3 digit inputted number

#include<stdio.h>
#include<conio.h>

int main()
{
    int no=0,rev=0,temp=0;

    printf("\nEnter a number=>\n");
    scanf("%d",&no);

    temp=no;

    while(temp>0)
    {
        rev=(rev*10)+(temp%10);
        temp/=10;
    }

    printf("\n=======================================\n");
    printf("\n Reverse of the Number %d = %d\n",no,rev);
    printf("\n========================================\n");

    getch();
    return 0;
}
