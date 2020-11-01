/*Write a program which accept string from user and copy the contents of that string into another string.
(Implement strcpy()function)
Input : “Marvellous Multi OS”
Output : “Marvellous Multi OS” in another string*/

#include<stdio.h>
#include<conio.h>

void StrCpyX(char*,char*);

void StrCpyX(char *src, char *dest)
{
    int i=0;

    while(src[i]!= '\0')
    {
        dest[i] = src[i];
        i++;
    }
    return dest;
}
int main()
{
    char arr[30]={'\0'};
    char brr[30]={'\0'};

    printf("\nEnter string => ");
    gets(arr);

    StrCpyX(arr,brr);

    printf("\nEntered String Is => %s \n",arr);
    printf("\nCopied String IS => %s \n",brr);

    getch();
    return 0;
}
