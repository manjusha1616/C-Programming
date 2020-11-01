//Program To Find Minimum Number From Array Using Recurssive Function

#include<stdio.h>
#include<conio.h>

#define size 3

int Accept_Elements(int*,int,int);
int Find_Min_Ele(int*);

int main()
{
    int Arr[size];
    int Min=0,i=0,Res=0;

    Res=Accept_Elements(Arr,i,Min);

    getch();
    return 0;
}

int Find_Min_Ele(int Arr[])
{
    static int Min=999999,i=0;

    if(i<size)
    {
       if(Arr[i]<Min)
       {
           Min=Arr[i];
       }

       i++;

       Find_Min_Ele(Arr);

    }
    return Min;
}

int Accept_Elements(int Arr[],int i,int Min)
{
    for(i=0;i<size;i++)
    {
        printf("\n Enter Array Element %d => ",i+1);
        scanf("%d",&Arr[i]);

    }

    Min=Find_Min_Ele(Arr);

    printf("\n\n Minimum Element in Array => %d",Min);

}

