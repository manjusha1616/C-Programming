//Small Letters Count in Given String
#include<stdio.h>
#include<conio.h>

void Small_Cnt(char*);

int main()
{
    char cSrc[20]={'\0'};

    printf("\n Enter A String To Find Small Letters Count in it\n\n");
    gets(cSrc);

    Small_Cnt(cSrc);

    getch();
    return 0;
}

void Small_Cnt(char *inStr)
{
    int i=0,S_Cnt=0;

    while(inStr[i]!='\0')
    {
        if(inStr[i]>='a' && inStr[i]<='z')         //if(cSrc[i]>='97' && cSrc[i]<='122')
        {
            S_Cnt++;
        }
        i++;
    }

    printf("\n\n Small Letters Count in Given String is => %d",S_Cnt);
}

