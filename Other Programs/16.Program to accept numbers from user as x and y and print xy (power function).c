//program to accept numbers from user as x and y and print xy (power function)

#include<stdio.h>
#include<conio.h>

int main()
{
    int no1=0,no2=0,pow=1,temp=0;

    printf("\nEnter Two Numbers To get POWER as no1 raise to no2 \n");
    scanf("%d%d",&no1,&no2);

    temp=no2;

    while(temp>=1)
    {
        pow=pow*no1;
        temp--;
    }

    printf("\n\n===============================\n");
    printf("\n Power (%d)^%d=%d.",no1,no2,pow);
    printf("\n\n===============================\n\n");

    getch();
    return 0;
}
