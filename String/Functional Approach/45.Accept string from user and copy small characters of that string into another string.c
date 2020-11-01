/*Write a program which accept string from user and copy small characters of that string into another string.
Input : “Marvellous multi OS”
Output : “arvellous multi”*/

#include<stdio.h>
#include<conio.h>

void StrCpySmall(char*,char*);

void StrCpySmall(char *src, char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'a') && (*src <= 'z'))
        {
           *dest = *src;
            dest++;
        }
        src++;
    }
    return dest;
}

int main()
{
    char arr[30] ={'\0'};
    char brr[30]={'\0'};

    printf("\nEnter The String => ");
    gets(arr);

    StrCpySmall(arr,brr);

    printf("\n\nsmall characters in given String => %s \n",brr);

    getch();
    return 0;
}
