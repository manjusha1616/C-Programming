//write a program to find maximum number from 3 numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    int n1=0,n2=0,n3=0;

    lbl:

    printf("Enter 3 Numbers to Find Maximum from it=> \n");
    scanf("%d%d%d",&n1,&n2,&n3);

    if(n1==n2&&n1==n3)
    {
        printf("\n All 3 Numbers are Maximum \n");
        goto lbl;
    }
    if(n1>n2)
    {
        if(n1>n3)
        {
            printf("\n%d is maximum",n1);
        }
        else
        {
            printf("\n%d is Maximum",n3);
        }
    }
    else if(n2>n3)
    {
        printf("\n%d is maximum",n2);
    }
    else
    {
        printf("\n%d is maximum",n3);
    }
    getch();
    return 0;
}
