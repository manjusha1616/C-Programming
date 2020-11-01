//White Spaces Count in Given String
#include<stdio.h>
#include<conio.h>

void Spc_Cnt(char*);

int main()
{
    char cSrc[20]={'\0'};

    printf(" Enter A String To Find White Spaces Count in it\n");
    gets(cSrc);

    Spc_Cnt(cSrc);

    getch();
    return 0;
}

void Spc_Cnt(char *inStr)
{
    int i=0,S_Cnt=0;

    while(inStr[i]!='\0')
    {
        if(inStr[i]==' ')
        {
            S_Cnt++;
        }
        i++;
    }

    printf("\n White Spaces Count in Given String is => %d",S_Cnt);
}





