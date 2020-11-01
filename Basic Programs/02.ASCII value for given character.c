//write a program to print ASCII value of given character

#include<stdio.h>
#include<conio.h>

int main()
{
    char c;

    printf("Enter a character \n");
    scanf("%c",&c);

    printf("\n ASCII value of character %c=%d",c,c);

    getch();
    return 0;
}
