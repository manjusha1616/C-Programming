//Form A No From Digits In Given String
#include<stdio.h>
#include<conio.h>

void No_From_Digits(char*);

int main()
{
    char cSrc[50]={'\0'};

    printf("\n Enter A String To Form A Number From Digits In Given String\n\n");
    gets(cSrc);

    No_From_Digits(cSrc);

    getch();
    return 0;
}

void No_From_Digits(char *inStr)
{
    int i=0,No=0;

    while(inStr[i]!='\0')
    {
        if(inStr[i]>='0' && inStr[i]<='9')
        {
            No=(No*10)+(inStr[i]-48);
        }
        i++;
    }

    printf("\n\n Number Formed From Given String Is => %d",No);
}
