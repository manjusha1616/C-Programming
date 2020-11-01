//write a program to accept number from user and check whether it is palindrome or not

#include<stdio.h>
#include<conio.h>

int main()
{
    int no=0,rev=0,temp=0;

    printf("\nEnter a number=>\n");
    scanf("%d",&no);

    temp=no;

    while(temp>0)
    {
        rev=(rev*10)+(temp%10);
        temp/=10;
    }

    printf("\n==========================================\n");
    printf("\nReverse of the Number %d = %d",no,rev);
    if(no==rev)
    {
        printf("\n\nHence The %d is a palindrome number",no);
    }
    else
    {
        printf("\n\nHence The %d is not a palindrome number\n");
    }
    printf("\n\n==========================================");

    getch();
    return 0;
}
