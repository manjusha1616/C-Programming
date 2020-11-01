/*Write a program which accept string from user and return
difference between frequency of small characters and frequency of
capital characters.
Input : “MarvellouS”
Output : 6 (8-2)*/

#include<stdio.h>
#include<conio.h>

int Difference(char*);

int Difference(char *str)
{
    int C_Cnt = 0,S_Cnt=0;

    while(*str != '\0')
    {
        if(*str>='A' && *str<='Z')
        {
            C_Cnt++;
        }
        if(*str>='a' && *str<='z')
        {
            S_Cnt++;
        }
        *str++;
    }
    return C_Cnt-S_Cnt;
}

int main()
{
    char arr[20];

    printf("\nEnter string => ");
    scanf("%[^'\n']s",arr);

    printf("\n\n Difference between Capital & Small Letters Count in Given String is => %d \n",Difference(arr));

    getch();
    return 0;
}
