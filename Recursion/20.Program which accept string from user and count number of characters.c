/*Write a recursive program which accept string from user and count number of characters.
Input : Hello
Output : 5*/

#include<stdio.h>
#include<conio.h>

int Strlen(char*);

int Strlen(char *str)
{
    static int Cnt=0;

    if(*str!='\0')
    {
        while(*str==' ')
        Cnt++;
        Strlen(++str);
    }
    else
    {
        return Cnt;
    }
}

int main()
{
    int iRet = 0;
    char arr[20];

    printf("\nEnter String => ");
    gets(arr);

    iRet = Strlen(arr);

    printf("\n count number of characters => %d \n",iRet);

    return 0;
}
