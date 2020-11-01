//write a program to input 3 digit number and find out maximum digit from it

#include<stdio.h>
#include<conio.h>

int main()
{
    int no=0,max=0,temp=0;

    printf("\nEnter a three digit number=>\n");
    scanf("%d",&no);

    for(temp=no;temp!=0;temp=temp/10)
    {
        if(temp%10>max)
        {
            max=temp%10;
        }
    }

    printf("\n\n========================================\n");
    printf("\n The Maximum DIGIT in Number %d = %d\n",no,max);
    printf("\n========================================\n");

    getch();
    return 0;
}
