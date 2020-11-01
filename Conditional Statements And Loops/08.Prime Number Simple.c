//write a program to accept no from user and find it is prime or not
#include<stdio.h>
#include<conio.h>
int main()
{
    int no=0,i=0;

    lbl:

    printf("\nEnter a Number To Check Whether it is Prime Or Not=>");
    scanf("%d",&no);

    if(no<0)
    {
        printf("\n Invalid input \n");
        goto lbl;
    }

    if(no==0||no==1)
    {
        printf("\n\nGiven Number is Neutral\n");
        goto lbl;
    }

    i=2;
    while(i<no/2)
    {
        if(no%i==0)
        {
           break;
        }
        i++;
    }

    if(no/2==i)
    {
        printf("\n Given Number %d is Prime",no);
    }
   else
    {
        printf("\n Given Number %d is Not Prime",no);
    }
    getch();
    return 0;
}
