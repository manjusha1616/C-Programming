//program to find maximum no from two numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    int n1=0,n2=0;

    Up:
    printf("\nEnter Two Numbers=> \n");
    scanf("%d%d",&n1,&n2);

    if(n1 == n2)
    {
        printf("\n\n%d and %d are Equal Numbers \n",n1,n2);
        goto Up;
    }

    if(n1>n2)
    {
        printf("\n%d is Maximum Number \n",n1);
    }
    else
    {
        printf("\n%d is Maximum Number \n",n2);
    }

    getch();
    return 0;
}
