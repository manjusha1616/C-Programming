/*Accept a number from user if number is less than 10 then print
“Hello” otherwise print “Demo”*/

#include<stdio.h>
#include<conio.h>

void Display(int);

void Display (int iNo)
{
    printf("\n==================$$$$$$$$$$==================\n\n");
    if(iNo < 10)
    {
        printf(" Hello ");
    }
    else
    {
        printf(" Demo ");
    }
    printf("\n\n==================$$$$$$$$$$==================\n");
}
int main()
{
    int iValue = 0;

    printf(" Enter number \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
