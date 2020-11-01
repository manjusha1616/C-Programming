//Program to check whether entered character is uppercase / lowercase / digit / special symbol
#include<stdio.h>
#include<conio.h>
int main()
{
    char ch='\0';

    printf("\nEnter a character to chech it is uppercase or lowercase or digit or special symbol=> \n");
    ch=getche();
    getch();

    if(ch>='A'&&ch<='Z')
    {
        printf("\nGiven Character is Uppercase\n");
    }
    else if(ch>='a'&&ch<='z')
    {
        printf("\nGiven Character is Lowercase\n");
    }
    if(ch>='0'&&ch<='9')
    {
        printf("\nGiven Character is DIGIT\n");
    }
    if(ch>=32&&ch<=64)
    {
        printf("\nGiven Character is Special Symbol\n");
    }
    getch();
    return 0;

}
