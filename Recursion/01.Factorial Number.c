//Factorial Number

#include<stdio.h>
#include<conio.h>

int Fun_Fact(int);

int main()
{
    int No=0,Fact=0;

    printf("\n Enter A Number To Find Its Factorial \n");
    scanf("%d", &No);

    Fact=Fun_Fact(No);

    printf("\n Factorial Number Of Given Number Is => %d \n",Fact);

    getch();
    return 0;
}

int Fun_Fact(Num)
{
    static int Fact=1;

    if(Num>1)
    {
        Fact=Fun_Fact(Num-1);
    }

    return Fact*Num;
}
