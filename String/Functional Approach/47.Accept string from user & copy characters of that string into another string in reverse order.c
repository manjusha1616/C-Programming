/*Write a program which accept string from user and copy that characters of that string into another string in reverse order.
Input : “Marvellous Python”
Output : “nohtyP suollevraM”*/

#include<stdio.h>
#include<conio.h>

void StrCpyRev(char*,char*);

void StrCpyRev(char *src, char *dest)
{
    int i=0,j=0;

    while(src[i]!='\0')
    {
        i++;
    }

    i--;

    while(i>=0)
    {
        dest[j]=src[i];
        i--;
        j++;
    }
    printf("\nCopied String Is => %s ",dest);
}

int main()
{
    char arr[50] = {'\0'};
    char brr[30] = {'\0'};

    printf("\nEnter The String => ");
    gets(arr);

    StrCpyRev(arr,brr);

     // nohtyP suollevraM

    getch();
    return 0;
}
