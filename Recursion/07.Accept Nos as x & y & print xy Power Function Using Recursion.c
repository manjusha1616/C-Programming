//program to accept numbers from user as x and y and print xy power function using recursion

#include<stdio.h>
#include<conio.h>

int Power_Fun(int,int);

int main()
{
    int No1=0,No2=0,Pow=0;

    printf("\nEnter Two Numbers To get POWER as no1 raise to no2 \n");
    scanf("%d%d",&No1,&No2);

    Pow=Power_Fun(No1,No2);

    printf("\n\n===============================\n");
    printf("\n Power (%d)^%d=%d.",No1,No2,Pow);
    printf("\n\n===============================\n\n");

    getch();
    return 0;
}

int Power_Fun(int Num1, int Num2)
{
    static int Pow=1,Temp=0;

    Temp=Num2;

    while(Temp>=1)
    {
        Pow=(Num1*(Power_Fun(Num1,Num2-1)));
    }
    return Pow;
}
