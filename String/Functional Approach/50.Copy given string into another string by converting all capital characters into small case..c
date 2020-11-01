/*Write a program which accept string from user and copy that
characters of that string into another string by converting all capital
characters into small case.
Input : “Marvellous Python 2”
Output : “marvellous python 2”*/

#include<stdio.h>
#include<conio.h>

void StrCpySmall(char*,char*);

void StrCpySmall(char *src, char *dest)
{
    while(*src!='\0')
    {
        if(*src>='A'&&*src<='Z')
        {
            *src=*src+32;
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

    StrCpySmall(arr,brr);

    printf("\nCopied String Is => %s ",brr);// MarvellousPython

    getch();
    return 0;
}
