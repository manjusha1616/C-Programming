/*Write a program which accept string from user and accept one character.Return frequency of that character.
Input : “Marvellous Multi OS”
M
Output : 2
Input : “Marvellous Multi OS”
W
Output : 0*/

#include<stdio.h>
#include<conio.h>

int CountChar(char*,char);

int CountChar(char *str, char ch)
{
    int i=0,Cnt=0;

    while(str[i]!='\0')
    {
        if(str[i]==ch)
        {
            Cnt++;
        }
        i++;
    }
    return Cnt;
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

    iRet = CountChar(arr, cValue);

    printf("\nCharacter frequency is %d \n",iRet);

    getch();
    return 0;
}
