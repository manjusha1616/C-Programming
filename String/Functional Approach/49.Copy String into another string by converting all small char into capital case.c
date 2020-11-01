/*Write a program which accept string from user & copy that characters of that string into another string by converting all small
characters into capital case.
Input : “Marvellous Python 2”
Output : “MARVELLOUS PYTHON 2”*/

#include<stdio.h>
#include<conio.h>

void StrCpyCap(char*,char*);

void StrCpyCap(char *src, char *dest)
{
    while(*src!='\0')
    {
        if(*src>='a'&&*src<='z')
        {
            *src=*src-32;
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

    StrCpyCap(arr,brr);

    printf("\nCopied String Is => %s ",brr);// MarvellousPython

    getch();
    return 0;
}
