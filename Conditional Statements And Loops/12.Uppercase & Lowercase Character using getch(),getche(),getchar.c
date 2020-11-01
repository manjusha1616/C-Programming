//write a program to check whether entered character is uppercase or lowercase(getch,getche,getchar)

#include<stdio.h>
#include<conio.h>

int main()
{
    char ch;
    printf("\nEnter a Character To Check Whether it is Uppercase or Lowercase=> \n");
    ch=getche();
    getchar();

    if(ch<=65||ch>=90)
    {
        printf("\n%c is a LOWERCASE character",ch);
    }
    else
    {
        printf("\n%c is a UPPERCASE character",ch);
    }

    getch();
    return 0;
}
