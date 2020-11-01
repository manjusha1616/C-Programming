/*Write a program which accept string from user and toggle the case.
Input : “Marvellous Multi OS”
Output : mARVELLOUS mULTI os*/

#include<stdio.h>
#include<conio.h>

void strtogglex(char*);

void strtogglex(char *str)
{
    int i=0,j=0;

    while(str[i]!='\0')
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
        else if(str[i]>='a' && str[i]<='z')
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

    strtogglex(arr);

    printf("\nModified string is => %s",arr);

    getch();
    return 0;
}
