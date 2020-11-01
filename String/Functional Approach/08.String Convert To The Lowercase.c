//String Convert To The Lowercase
#include<stdio.h>
#include<conio.h>

void Convert_Lcase(char*);

int main()
{
    char cSrc[20]={'\0'};

    printf("\n Enter A String To Convert It Into The Lowercase\n\n");
    gets(cSrc);

    Convert_Lcase(cSrc);

    getch();
    return 0;
}

void Convert_Lcase(char *inStr)
{
    int i=0;

    while(inStr[i]!='\0')
    {
        if(inStr[i]>='A' && inStr[i]<='Z')
        {
            inStr[i]=inStr[i]+32;
        }
        i++;
    }
    inStr[i]='\0';

    printf("\n\n Modified String is => %s",inStr);
}



