//String Convert To The Lowercase

#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20]={'\0'};
    int i=0;

    printf("\n Enter A String To Convert It Into The Lowercase\n\n");
    gets(cSrc);

     while(cSrc[i]!='\0')
    {
        if(cSrc[i]>='A' && cSrc[i]<='Z')
        {
            cSrc[i]=cSrc[i]+32;
        }
        i++;
    }
    cSrc[i]='\0';

    printf("\n\n Modified String is => %s",cSrc);

    getch();
    return 0;
}




