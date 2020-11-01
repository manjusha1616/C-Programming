/*Write a program which accept string from user and count number of small characters.
Input : “Marvellous”
Output : 9*/

#include<stdio.h>
#include<conio.h>

int CountSmall(char*);

int CountSmall(char *str)
{
    int i=0,C_Cnt=0;

    int iCnt = 0;

    while(*str != '\0')
    {
         if(*str>='a' && *str<='z')
        {
            C_Cnt++;
        }
        *str++;
    }
    return C_Cnt;
}

int main()
{
    char arr[20];

    printf("\nEnter string => ");
    scanf("%[^'\n']s",arr);

    printf("\n\n small Letters Count in Given String is => %d \n",CountSmall(arr));

    getch();
    return 0;
}
