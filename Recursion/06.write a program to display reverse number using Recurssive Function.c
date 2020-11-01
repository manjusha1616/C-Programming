//write a program to display reverse number using Recurssive Function

#include<stdio.h>
#include<conio.h>

void Reverse_No(int);

int main()
{
    int No=0;

    printf("\nEnter a number => ");
    scanf("%d",&No);

    printf("\n=======================================\n");
    printf("\n Reverse of the Number %d = ",No);

    Reverse_No(No);

    printf("\n\n========================================\n");

    getch();
    return 0;
}

void Reverse_No(int Num)
{
    static int Rev=0;

    if(Num>0)
    {
        Rev=Num%10;
        printf("%d",Rev);
        Reverse_No(Num/10);
    }
}
