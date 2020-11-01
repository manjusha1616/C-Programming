//Accept N Numbers and Calculate Their Sum Using Recurssive Function

#include<stdio.h>
#include<conio.h>

int Fun_Sum(int);

int main()
{
    int Sum=0,Cnt=0;

    printf("\n Enter A Count Of Numbers To Find Its Sum \n");
    scanf("%d", &Cnt);

    Sum=Fun_Sum(Cnt);

    printf(" \n******************************************* \n");
    printf("\n Sum Of Entered Numbers Is => %d \n",Sum);
    printf(" \n******************************************* \n");

    getch();
    return 0;
}

int Fun_Sum(int Cnt)
{
    int i=0,Sum=0;

    if(Cnt == 0)
    {
        return Sum;
    }
    else
    {
        printf("\n Enter Number =>");
        scanf("%d",&i);
        Sum=Sum+i;
        return Sum + Fun_Sum(Cnt-1);
    }
}
