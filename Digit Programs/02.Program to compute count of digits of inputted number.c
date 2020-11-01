//write a program to compute count of digits of inputted number

#include<stdio.h>
#include<conio.h>

int main()
{
    int no=0,dcnt=0,temp=0;

    printf("\nEnter a number=>\n");
    scanf("%d",&no);

    for(temp=no;temp!=0;temp=temp/10)
    {
        dcnt++;
    }

    printf("\n============================================\n");
    printf("\nThe Count Of Digits Of Number %d = %d \n",no,dcnt);
    printf("\n============================================\n\n");

    getch();
    return 0;
}
