//Program To Copy The String To Another String
#include<stdio.h>
#include<conio.h>

void String_Copy(char*,char*);

int main()
{
    char cSrc[50]={'\0'};
    char cDest[50]={'\0'};

    printf("\nEnter a String => ");
    gets(cSrc);

    String_Copy(cSrc,cDest);

    getch();
    return 0;
}

void String_Copy(char *inStr,char *outStr)
{
    int i=0;

    while(inStr[i]!='\0')
    {
        outStr[i]=inStr[i];
        i++;
    }

    printf("\nThe Entered String is => %s \n",inStr);
    printf("\nThe Copied String is => %s \n",outStr);
}
