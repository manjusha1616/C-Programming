//White Spaces Count in Given String

#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20]={'\0'};
    int i=0,S_Cnt=0;

    printf(" Enter A String To Find White Spaces Count in it\n");
    gets(cSrc);

    while(cSrc[i]!='\0')
    {
        if(cSrc[i]==' ')
        {
            S_Cnt++;
        }
        i++;
    }

    printf("\n White Spaces Count in Given String is => %d",S_Cnt);

    getch();
    return 0;
}







