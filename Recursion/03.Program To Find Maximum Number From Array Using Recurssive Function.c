//Program To Find Maximum Number From Array Using Recurssive Function
#include<stdio.h>
#include<conio.h>
#define size 5

int Accept_Elements(int*,int,int);
int Find_Max_Ele(int*);

int main()
{
    int Arr[size];
    int Max=0,i=0,Res=0;

    Res=Accept_Elements(Arr,i,Max);

    getch();
    return 0;
}

int Find_Max_Ele(int Arr[])
{
    static int i=0,Max=0;

    if(i<size)
    {
       if(Arr[i]>Max)
       {
           Max=Arr[i];
       }

       i++;

       Find_Max_Ele(Arr);

    }
    return Max;
}

int Accept_Elements(int Arr[],int i,int Max)
{
    for(i=0;i<size;i++)
    {
        printf("\n Enter Array Element %d => ",i+1);
        scanf("%d",&Arr[i]);

    }

    Max=Find_Max_Ele(Arr);

    printf("\n\n Maximum Element in Array => %d",Max);

}

