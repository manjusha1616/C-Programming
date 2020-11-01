/*Write a program which accept string from user and convert it into upper case.
Input : “Marvellous Multi OS”
Output : MARVELLOUS MULTI OS*/

#include<stdio.h>
#include<conio.h>

void struprx(char*);

void struprx(char *str)
{
    int i=0;

    while(str[i]!='\0')
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i]=str[i]-32;
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

    struprx(arr);

    printf("\nModified string is => %s",arr);

    getch();
    return 0;
}
