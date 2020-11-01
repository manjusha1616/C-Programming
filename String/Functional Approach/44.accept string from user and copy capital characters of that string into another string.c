/*Write a program which accept string from user and copy capital characters of that string into another string.
Input : “Marvellous Multi OS”
Output : “MMOS”*/

#include<stdio.h>
#include<conio.h>

void StrCpyCap(char*,char*);

void StrCpyCap(char *src, char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'A') && (*src <= 'Z'))
        {
            *dest = *src;
            dest ++;
        }
        src ++;
    }
    return dest;
}

int main()
{
    char arr[30] ={'\0'};
    char brr[30]={'\0'};

    printf("\nEnter The String => ");
    gets(arr);

    StrCpyCap(arr,brr);

    printf("\n%s\n",brr); // MMOS

    getch();
    return 0;
}
