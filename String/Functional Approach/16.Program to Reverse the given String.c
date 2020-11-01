//Program to Reverse the given String
#include<stdio.h>
#include<conio.h>

void Rev_String(char*,char*);

int main()
{
    char cSrc[20]={'\0'};
    char cDest[20]={'\0'};

    printf("Enter The String To Reverse It=>\n");
    gets(cSrc);

    Rev_String(cSrc,cDest);

    getch();
    return 0;
}

void Rev_String(char *inStr,char *outStr)
{
    int i=0,j=0;

    while(inStr[i]!='\0')
    {
        i++;
    }

    i--;

    while(i>=0)
    {
        outStr[j]=inStr[i];
        j++;
        i--;
    }

    printf("\nGiven String is=> %s ",inStr);
    printf("\nString After Reverse=> %s ",outStr);
}
