//String Convert To The Togglecase
#include<stdio.h>
#include<conio.h>

void Toggle_Case(char*);

int main()
{
    char cSrc[20]={'\0'};


    printf("\n Enter A String To Convert It Into The Lowercase\n\n");
    gets(cSrc);

    Toggle_Case(cSrc);

    getch();
    return 0;
}

void Toggle_Case(char *inStr)
{
    int i=0;

    while(inStr[i]!='\0')
    {
        if(inStr[i]>='A' && inStr[i]<='Z')
        {
            inStr[i]=inStr[i]+32;
        }
        else if(inStr[i]>='a' && inStr[i]<='z')
        {
            inStr[i]=inStr[i]-32;
        }
        i++;
    }
    inStr[i]='\0';

    printf("\n\n Modified String is => %s",inStr);
}
