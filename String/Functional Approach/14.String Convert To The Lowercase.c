//Program To Find String Length
#include<stdio.h>
#include<conio.h>

void String_Length(char*);

int main()
{

    char cSrc[50]={'\0'};

    printf("\nEnter a String To Find Its Length => ");
    gets(cSrc);

    String_Length(cSrc);

    getch();
    return 0;
}

void String_Length(char *inStr)
{
    int Len=0;

    for(Len=0;inStr[Len]!='\0';Len++);

    printf("\nThe Length Of Entered String is => %d",Len);
}

