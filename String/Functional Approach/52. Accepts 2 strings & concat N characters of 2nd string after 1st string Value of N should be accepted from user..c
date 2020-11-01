/*Write a program which accepts 2 strings from user and concat N
characters of second string after first string.Value of N should be
accepted from user. (Implement strncat() function).
Note : If third parameter is greater than the size of second string then
concat whole string after first string.
Input : “Marvellous Infosystems”
“Logic Building”
5
Output : “Marvellous Infosystems Logic”*/

#include<stdio.h>
#include<conio.h>

void StrNCatX(char*,char*,int);

void StrNCatX(char *src, char * dest, int iCnt)
{
    while(*src != '\0')
    {
        src++;
    }
    while((* dest != '\0') && (iCnt != 0))
    {
        *src=*dest;
        *dest++;
        *src++;
        iCnt--;
    }
    *dest = '\0';
}

int main()
{
    char arr[50] ={'\0'};
    char brr[30] ={'\0'};
    int N=0;

    printf("\nEnter String 1 => ");
    gets(arr);

    printf("\nEnter String 2 => ");
    gets(brr);

    printf("\nEnter Count To Display Second String ");
    scanf("%d",&N);

    StrNCatX(arr,brr,N);

    printf("\n%s\n",arr);

    getch();
    return 0;
}
