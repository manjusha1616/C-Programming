/*Write a program which accept string from user and count number of capital characters.
Input : “Marvellous Multi OS”
Output : 4*/

#include<stdio.h>
#include<conio.h>

int CountCapital(char*);

int CountCapital(char *str)
{
    int i=0,C_Cnt=0;

    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str>='A' && *str<='Z')
        {
            C_Cnt++;
        }
        *str++;
    }
    return C_Cnt;
}

int main()
{
    char cSrc[20]={'\0'};

    printf("\n Enter A String To Find Capital Letters Count in it\n\n");
    gets(cSrc);

    printf("\n\n Capital Letters Count in Given String is => %d",CountCapital(cSrc));

    getch();
    return 0;
}
