/*Write a program which accept string from user and convert it into lower case.
Input : “Marvellous Multi OS”
Output : marvellous multi os*/

#include<stdio.h>
#include<conio.h>

void strlwrx(char*);

void strlwrx(char *str)
{
    int i=0;

    while(str[i]!='\0')
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
        i++;
    }
    str[i]='\0';

    return str;
}

int main()
{
    char arr[20];

    printf("\nEnter string => ");
    scanf("%[^'\n']s",arr);

    strlwrx(arr);

    printf("\nModified string is => %s",arr);

    getch();
    return 0;
}
