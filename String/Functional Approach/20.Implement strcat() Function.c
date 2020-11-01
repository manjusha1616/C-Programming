//Write program to accept 2 strings from user and Concat both strings. (Implement strcat() Function)
#include<stdio.h>
#include<conio.h>

void str_strcat(char*,char*);

int main()
{
    char cSrc1[30]="";
    char cSrc2[30]="";

    printf(" Enter A String \n");
    gets(cSrc1);

    printf(" Enter A Substring \n");
    gets(cSrc2);

    str_strcat(cSrc1,cSrc2);

    getch();
    return 0;
}

void str_strcat(char *inStr1,char *inStr2)
{
    int i=0;

    while(inStr1[i]!='\0')
    {
        i++;
    }

    while(inStr2[i]!='\0')
    {
        inStr1[i]=inStr2[i];

    }
    i++;
    inStr1[i]='\0';

    printf("Modified String Is => %s ",inStr1);

    return;
}
