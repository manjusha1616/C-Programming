/*Write a program which accept string from user and count number of white spaces
Input : “MarvellouS”
Output : 0
Input : “MarvellouS Infosystems”
Output : 1
Input : “MarvellouS Infosystems by Piyush Manohar Khairnnar”
Output : 5*/

#include<stdio.h>
#include<conio.h>

int CountWhite(char*);

int CountWhite(char *str)
{
    int i=0,cnt=0;

    while(str[i]!='\0')
    {
        if(str[i]==' ')
        {
            cnt++;
        }
        i++;
    }
    return cnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("\nEnter string => ");
    scanf("%[^'\n']s",arr);

    iRet = CountWhite(arr);

    printf("\n\n Number Of White Spaces In Given String Is => %d",iRet);

    getch();
    return 0;
}
