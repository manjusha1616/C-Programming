/*Write a program which accept string from user & copy characters of that string into another string by removing all white spaces.
Input : “Marvel lous Pyth on”
Output : “MarvellousPython”*/

#include<stdio.h>
#include<conio.h>

void StrCpyX(char*,char*);

void StrCpyX(char *src, char *dest)
{
    while(*src!='\0')
    {
        if(*src==' ')
        {
            *src++;
        }
        *dest=*src;
        *src++;
        *dest++;
    }
    return dest;
}

int main()
{
    char arr[50] = {'\0'};
    char brr[30] = {'\0'};

    printf("\nEnter The String => ");
    gets(arr);

    StrCpyX(arr,brr);

    printf("\nCopied String Is => %s ",brr);// MarvellousPython

    getch();
    return 0;
}
