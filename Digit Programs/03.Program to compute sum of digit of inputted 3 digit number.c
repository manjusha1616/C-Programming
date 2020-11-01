//write a program to compute sum of digit of inputted 3 digit number

#include<stdio.h>
#include<conio.h>

int main()
{
    int no=0,sum=0,temp=0;

    printf("\nEnter a three digit number=>\n");
    scanf("%d",&no);

    temp=no;

    if(no<0)
    {
        printf("\n Invalid input");
        return -1;
    }
    for(temp=no;temp!=0;temp=temp/10)
    {
        sum=sum+(temp%10);
    }

    printf("\n=====================================\n");
    printf("\n The Sum Of Digits Of %d = %d\n",no,sum);
    printf("\n=====================================\n\n");

    getch();
    return 0;
}
