//Capital Letters Count in Given String
#include<stdio.h>
#include<conio.h>

void Cap_Cnt(char*);

int main()
{
    char cSrc[20]={'\0'};

    printf("\n Enter A String To Find Capital Letters Count in it\n\n");
    gets(cSrc);

    Cap_Cnt(cSrc);

    getch();
    return 0;
}

void Cap_Cnt(char *inStr)
{
    int i=0,C_Cnt=0;

    while(inStr[i]!='\0')
    {
        if(inStr[i]>='A' && inStr[i]<='Z')         //if(cSrc[i]>='65' && cSrc[i]<='90')
        {
            C_Cnt++;
        }
        i++;
    }

    printf("\n\n Capital Letters Count in Given String is => %d",C_Cnt);
}

