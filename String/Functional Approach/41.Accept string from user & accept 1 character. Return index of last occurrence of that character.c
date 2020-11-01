/*Write a program which accept string from user & accept 1 character. Return index of last occurrence of that character.
Input : “Marvellous Multi OS”
M
Output : 11
Input : “Marvellous Multi OS”
W
Output : -1
Input : “Marvellous Multi OS”
e
Output : 4*/

#include<stdio.h>
#include<conio.h>

int LastChar(char*,char);

int LastChar(char *str, char ch)
{
    int i=0;

    while(str[i]!='\0')
    {
        i++;
    }
    i--;
    while(i>=0)
    {
        if(str[i]==ch)
        {
            return i;
        }
        i--;
    }
    return -1;
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("\nEnter string => ");
    gets(arr);

    printf("\nEnter the character => ");
    scanf("%c",&cValue);

    iRet = LastChar(arr, cValue);

    printf("\nCharacter location is %d \n",iRet);

    getch();
    return 0;
}
