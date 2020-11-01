//String Convert To The Uppercase
#include<stdio.h>
#include<conio.h>

void Convert_Ucase(char*);

int main()
{
    char cSrc[20]={'\0'};

    printf("\n Enter A String To Convert It Into Uppercase\n\n");
    gets(cSrc);

    Convert_Ucase(cSrc);

    getch();
    return 0;
}

void Convert_Ucase(char *inStr)
{
    int i=0;

    while(inStr[i]!='\0')
    {
        if(inStr[i]>='a' && inStr[i]<='z')
        {
            inStr[i]=inStr[i]-32;
        }
        i++;
    }
    inStr[i]='\0';

    printf("\n\n Modified String is => %s",inStr);
}
