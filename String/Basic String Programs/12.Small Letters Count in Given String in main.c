//Small Letters Count in Given String

#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20]={'\0'};
    int i=0,S_Cnt=0;

    printf("\n Enter A String To Find Small Letters Count in it\n\n");
    gets(cSrc);

    while(cSrc[i]!='\0')
    {
        if(cSrc[i]>='a' && cSrc[i]<='z')         //if(cSrc[i]>='97' && cSrc[i]<='122')
        {
            S_Cnt++;
        }
        i++;
    }

    printf("\n\n Small Letters Count in Given String is => %d",S_Cnt);

    getch();
    return 0;
}



