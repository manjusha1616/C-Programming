//Capital Letters Count in Given String

#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20]={'\0'};
    int i=0,C_Cnt=0;

    printf("\n Enter A String To Find Capital Letters Count in it\n\n");
    gets(cSrc);

     while(cSrc[i]!='\0')
    {
        if(cSrc[i]>='A' && cSrc[i]<='Z')         //if(cSrc[i]>='65' && cSrc[i]<='90')
        {
            C_Cnt++;
        }
        i++;
    }

    printf("\n\n Capital Letters Count in Given String is => %d",C_Cnt);

    getch();
    return 0;
}


